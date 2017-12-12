

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

/**
 * This is the number of multi-advertising instances. This is NOT the
 * total number of advertising instances. The total number of
 * advertising instances is this number plus 1 (assuming the device
 * supports advertising).
 */
#define BLE_MULTI_ADV_INSTANCES             (0)


#endif /* SYSCFG_H */
