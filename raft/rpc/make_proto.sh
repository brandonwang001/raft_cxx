protoc --grpc_out=. --plugin=protoc-gen-grpc=`which grpc_cpp_plugin` raft.proto
protoc --cpp_out=. raft.proto
