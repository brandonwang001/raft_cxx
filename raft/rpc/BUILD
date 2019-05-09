cc_library(
    name = "raft_rpc",
    srcs = [
        "raft.grpc.pb.cc",
    ],
    hdrs = [
        "raft.grpc.pb.h",
    ],
    deps = [
        "//raft/rpc:raft_proto",
    ],
    linkopts = [
        "-lgrpc++",
        "-lgrpc",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "raft_proto",
    srcs = [
        "raft.pb.cc",
    ],
    hdrs = [
        "raft.pb.h",
    ],
    linkopts = [
        "-lprotobuf",
    ],
    visibility = ["//visibility:public"],
)
