# c++版的raft实现

# WAL
为了便于实现WAL，WAL采用基于rocksdb实现的，但是可以重新实现对应的接口进行自己的定制。

# 需要安装
- glog
- gtest
- gflags
- protobuf
- rocksdb
