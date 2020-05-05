#ifndef THIRD_PARTY_ONNX_C_H_
#define THIRD_PARTY_ONNX_C_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stddef.h>

/**
 * @brief  Inferes shape from protocol buffers model.
 *
 * @param  buffer: Pointer to protocol buffers message.
 * @param  size: Size of the protocol buffers message.
 * @param  output: Pointer to output buffer.
 * @retval Bytes written to output buffer.
 */
size_t
onnx_proto_shape_inference(const char* buffer, size_t size, char* output);

#ifdef __cplusplus
} // extern "C"
#endif

#endif /* THIRD_PARTY_ONNX_C_H_ */