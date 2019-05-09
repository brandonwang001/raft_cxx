protoc --grpc_out=. --plugin=protoc-gen-grpc=`which grpc_cpp_plugin` raft_rpc.proto
protoc --cpp_out=. raft_rpc.proto
