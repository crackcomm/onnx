#include "onnx/onnx-c.h"
#include "onnx/proto_utils.h"
#include "onnx/shape_inference/implementation.h"

extern "C" {

using namespace onnx;

size_t onnx_proto_shape_inference(const char* buffer, size_t size, char* output) {
  ModelProto proto{};
  bool status = ParseProtoFromBytes(&proto, buffer, size);
  shape_inference::InferShapes(proto);
  int written = proto.ByteSizeLong();
  proto.SerializeToArray(output, written);
  return static_cast<size_t>(written);
}

} // extern "C"