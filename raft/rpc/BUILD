cc_library(
    name = "raft_rpc",
    srcs = [
        "raft_rpc.grpc.pb.cc",
    ],
    hdrs = [
        "raft_rpc.grpc.pb.h",
    ],
    deps = [
        "//raft/rpc:raft_rpc_proto",
    ],
    linkopts = [
        "-lgrpc++",
        "-lgrpc",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "raft_rpc_proto",
    srcs = [
        "raft_rpc.pb.cc",
    ],
    hdrs = [
        "raft_rpc.pb.h",
    ],
    linkopts = [
        "-lprotobuf",
    ],
    visibility = ["//visibility:public"],
)
