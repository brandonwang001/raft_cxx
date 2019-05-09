#include <iostream>
#include <glog/logging.h>

#include "raft/server/server.h"

int main() {
  std::string address = "0.0.0.0:50051";
  raft::ServerOptions opts;
  opts.address = address;
  raft::MainServer server(opts);
  LOG(INFO) << "begin running";
  server.Run();
  return 0;
}
