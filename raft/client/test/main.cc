#include <iostream>
#include <glog/logging.h>

#include "raft/client/client.h"

int main() {
  std::string address = "10.2.208.241:50051";
  raft::ClientOptions opts;
  opts.address = address;
  raft::MainClient client(opts);
  LOG(INFO) << "begin AppendEntries";
  client.AppendEntries();
  return 0;
}
