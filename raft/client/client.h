#pragma once

#include <memory>
#include <string>
#include <thread>
#include <grpcpp/grpcpp.h>

#include "raft/common/error.h"
#include "raft/rpc/raft_rpc.grpc.pb.h"

namespace raft {

struct ClientOptions {
 public:
  std::string address;
};

class MainClient {
 public:
  MainClient(const ClientOptions& opts)
      : opts_(opts) {
    Init();
  }

  void Init() {
    auto channel = grpc::CreateChannel(opts_.address,
        grpc::InsecureChannelCredentials());
    stub_ = Raft::NewStub(channel);
  }

  Error AppendEntries();

 private:
  ClientOptions opts_;
  std::unique_ptr<Raft::Stub> stub_;
};

}  // namespace raft
