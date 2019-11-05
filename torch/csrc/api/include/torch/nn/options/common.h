#pragma once

// yf225 TODO: we want to allow two things to happen:
// 1. When people pass torch::nn::ModuleOptions as F::FuncOptions, we want to throw an informative error
// 2. We want zero-copying cast from torch::nn::ModuleOptions to F::FuncOptions in the internal implementation of module forward

#define TORCH_NN_FUNCTIONAL_REUSE_MODULE_OPTIONS(name) \
namespace functional { \
using name##FuncOptions = name##Options; \
}
