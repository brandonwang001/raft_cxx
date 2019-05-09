#include "client.h"

#include <memory>
#include <string>
#include <grpcpp/grpcpp.h>

namespace raft {

Error MainClient::AppendEntries() {
  grpc::ClientContext context;
  AppendEntriesReq req;
  AppendEntriesResp rsp;

  auto status = stub_->AppendEntries(&context,
      req, &rsp);
  if (!status.ok()) {
      RETURN_OK(); 
  }
  RETURN_OK();
}

}  // namespace raft
