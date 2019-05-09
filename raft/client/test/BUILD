cc_binary(
    name = "client_test",
    srcs = [
        "main.cc",
    ],
    deps = [
        "//raft/common:raft_common",
        "//raft/client:client",
    ],
    copts = [
        "-std=c++14",
    ],
    linkopts = [
        "-lglog",
    ],
    visibility = ["//visibility:public"],
)
