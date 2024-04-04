#ifndef X25519_H
#define X25519_H

#include <stdint.h>

#define X25519_SIZE	32

extern	void	X25519_ClampSecretKey(uint8_t *skey);
extern	void	X25519_PublicKey(uint8_t *pkey, const uint8_t *skey);
extern	void	X25519_SharedSecret(uint8_t *shared, const uint8_t *skey, const uint8_t *pkey);

#endif	/* X25519_H */
