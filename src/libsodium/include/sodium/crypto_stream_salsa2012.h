#ifndef crypto_stream_salsa2012_H
#define crypto_stream_salsa2012_H

#include "export.h"

#define crypto_stream_salsa2012_KEYBYTES 32
#define crypto_stream_salsa2012_NONCEBYTES 8

#ifdef __cplusplus
extern "C" {
#endif

SODIUM_EXPORT
int crypto_stream_salsa2012_ref(unsigned char *,unsigned long long,const unsigned char *,const unsigned char *);

SODIUM_EXPORT
int crypto_stream_salsa2012_ref_xor(unsigned char *,const unsigned char *,unsigned long long,const unsigned char *,const unsigned char *);

SODIUM_EXPORT
int crypto_stream_salsa2012_ref_beforenm(unsigned char *,const unsigned char *);

SODIUM_EXPORT
int crypto_stream_salsa2012_ref_afternm(unsigned char *,unsigned long long,const unsigned char *,const unsigned char *);

SODIUM_EXPORT
int crypto_stream_salsa2012_ref_xor_afternm(unsigned char *,const unsigned char *,unsigned long long,const unsigned char *,const unsigned char *);

#ifdef __cplusplus
}
#endif

#define crypto_stream_salsa2012 crypto_stream_salsa2012_ref
#define crypto_stream_salsa2012_xor crypto_stream_salsa2012_ref_xor
#define crypto_stream_salsa2012_beforenm crypto_stream_salsa2012_ref_beforenm
#define crypto_stream_salsa2012_afternm crypto_stream_salsa2012_ref_afternm
#define crypto_stream_salsa2012_xor_afternm crypto_stream_salsa2012_ref_xor_afternm

#endif
