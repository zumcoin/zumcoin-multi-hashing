#ifndef CRYPTONIGHTZUM_H
#define CRYPTONIGHTZUM_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

void cryptonightzum_hash(const char* input, char* output, uint32_t len, int variant);
void cryptonightzum_fast_hash(const char* input, char* output, uint32_t len);

#ifdef __cplusplus
}
#endif

#endif
