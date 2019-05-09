cc_library(
    name = "client",
    srcs = [
        "client.cc",
    ],
    hdrs = [
        "client.h",
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
