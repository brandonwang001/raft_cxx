all:
	cd ./raft/idl
	sh make_proto.sh
	cd -
	cd ./raft/rpc
	sh make_proto.sh
	cd -
	cd ./wal/idl
	sh make_proto.sh
	cd -
	bazel build ...
clean:
	bazel clean
