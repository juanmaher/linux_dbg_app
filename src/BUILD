# my_project/src/BUILD
cc_library(
    name = "data_reader",
    hdrs = ["DataReader.h"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "file_reader",
    srcs = ["FileReader.h"],
    deps = [":data_reader"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "data_processor",
    hdrs = ["DataProcessor.h"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "text_processor",
    srcs = ["TextProcessor.h"],
    deps = [":data_processor"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "data_distributor",
    hdrs = ["DataDistributor.h"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "email_distributor",
    srcs = ["EmailDistributor.h"],
    deps = [":data_distributor"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "data_pipeline",
    srcs = ["DataPipeline.h"],
    deps = [
        ":data_reader",
        ":data_processor",
        ":data_distributor",
    ],
    visibility = ["//visibility:public"],
)

cc_binary(
    name = "main",
    srcs = ["main.cpp"],
    deps = [
        ":file_reader",
        ":text_processor",
        ":email_distributor",
        ":data_pipeline",
    ],
)
