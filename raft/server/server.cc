#include "server.h"

#include <memory>
#include <string>
#include <memory> 
#include <grpcpp/grpcpp.h>

namespace raft {

Error AppendEntriesHandler::AppendEntries(
    grpc::ServerContext* context,
    const AppendEntriesReq* req,
    AppendEntriesResp* rsp) {
  RETURN_OK();
}

grpc::Status RaftServer::AppendEntries(
    grpc::ServerContext* context,
    const AppendEntriesReq* req,
    AppendEntriesResp* rsp) {
  auto ret = handler_.AppendEntries(
      context, req, rsp);
  if (ret != Ok()) {
    return grpc::Status::OK;
  }
  return grpc::Status::OK;
}

void MainServer::Run() {
  builder_.AddListeningPort(opts_.address,
      grpc::InsecureServerCredentials());
  builder_.RegisterService(&raft_server_);
  server_ = builder_.BuildAndStart();
  server_->Wait();
}

}  // namespace raft
