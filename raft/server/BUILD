cc_library(
    name = "server",
    srcs = [
        "server.cc",
    ],
    hdrs = [
        "server.h",
    ],
    deps = [
        "//raft/common:raft_common",
        "//raft/rpc:raft_rpc",
    ],
    copts = [
        "-std=c++14",
    ],
    visibility = ["//visibility:public"],
)
