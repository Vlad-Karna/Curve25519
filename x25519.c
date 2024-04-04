#include <string.h>

#include "x25519.h"

#include "c25519.h"

void X25519_ClampSecretKey(uint8_t *skey) {
	c25519_prepare(skey);
}

void X25519_PublicKey(uint8_t *pkey, const uint8_t *skey) {
	c25519_smult(pkey, c25519_base_x, skey);
}

void X25519_SharedSecret(uint8_t *shared, const uint8_t *skey, const uint8_t *pkey) {
	c25519_smult(shared, pkey, skey);
}
