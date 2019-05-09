# c++版的raft实现

#RPC
rpc我们使用了grpc，但是可以替换为适合的rpc框架。
通过server调用handler将server与raft算法本身进行分离。

# WAL
为了便于实现WAL，WAL采用基于rocksdb实现的，
但是可以重新实现对应的接口进行自己的定制。

# 需要安装
- glog
- gtest
- gflags
- protobuf
- rocksdb
- bazel
- grpc
