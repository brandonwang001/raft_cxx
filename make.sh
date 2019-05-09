#!/bin/bash
bazel clean
cd ./raft/idl
sh make_proto.sh
cd -
cd ./raft/rpc
sh make_proto.sh
cd -
cd ./wal/idl
sh make_proto.sh
cd -

#bazel build "//wal/src:wal"
#bazel build "//wal/test:wal_test"

#bazel build "//raft/server:server"
#bazel build "//raft/server/test:server_test"

#bazel build "//raft/client:client"
#bazel build "//raft/client/test:client_test"

bazel build ...
