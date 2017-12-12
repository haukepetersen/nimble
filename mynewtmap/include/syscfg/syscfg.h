

#ifndef SYSCFG_H
#define SYSCFG_H

#define BLE_ATT_PREFERRED_MTU       (256U)

/**
 * A GATT server uses these when a peer performs a "write long
 * characteristic values" or "write long characteristic descriptors"
 * procedure.  One of these resources is consumed each time a peer
 * sends a partial write.
 */
#define BLE_ATT_SVR_MAX_PREP_ENTRIES        (64U)
#endif /* SYSCFG_H */
