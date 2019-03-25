#ifndef CRYPTONIGHTZUMLITE_H
#define CRYPTONIGHTZUMLITE_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

void cryptonightzumlite_hash(const char* input, char* output, uint32_t len, int variant);
void cryptonightzumlite_fast_hash(const char* input, char* output, uint32_t len);

#ifdef __cplusplus
}
#endif

#endif
