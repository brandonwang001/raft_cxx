cc_binary(
    name = "server_test",
    srcs = [
        "main.cc",
    ],
    deps = [
        "//raft/common:raft_common",
        "//raft/server:server",
    ],
    copts = [
        "-std=c++14",
    ],
    linkopts = [
        "-lglog",
    ],
    visibility = ["//visibility:public"],
)
