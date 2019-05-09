#pragma once

#include <glog/logging.h>

#include <memory>
#include <string>
#include <thread>
#include <grpcpp/grpcpp.h>

#include "raft/common/error.h"
#include "raft/rpc/raft_rpc.grpc.pb.h"

namespace raft {

class AppendEntriesHandler {
 public:
  Error AppendEntries(grpc::ServerContext* context,
      const AppendEntriesReq* req,
      AppendEntriesResp* rsp);
};

class RaftServer final : public Raft::Service {
 public:
  grpc::Status AppendEntries(
      grpc::ServerContext* context,
      const AppendEntriesReq* req,
      AppendEntriesResp* rsp) override;
 private:
  AppendEntriesHandler handler_;
};

struct ServerOptions {
 public:
  std::string address;
};

class MainServer {
 public:
  MainServer(const ServerOptions& opts)
      : opts_(opts) {
  }

  void Run();

 private:
  ServerOptions opts_;
  std::unique_ptr<grpc::Server> server_;
  RaftServer raft_server_;
  grpc::ServerBuilder builder_;
};

}  // namespace raft
