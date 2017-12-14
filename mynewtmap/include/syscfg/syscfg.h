

#ifndef SYSCFG_H
#define SYSCFG_H

#include "syscfg_controller.h"
#include "syscfg_host.h"

// #define BLE_ROLE_PERIPHERAL         (1)


// #define BLE_ATT_PREFERRED_MTU       (256U)

// /**
//  * A GATT server uses these when a peer performs a "write long
//  * characteristic values" or "write long characteristic descriptors"
//  * procedure.  One of these resources is consumed each time a peer
//  * sends a partial write.
//  */
// #define BLE_ATT_SVR_MAX_PREP_ENTRIES        (64U)

// *
//  * This is the number of multi-advertising instances. This is NOT the
//  * total number of advertising instances. The total number of
//  * advertising instances is this number plus 1 (assuming the device
//  * supports advertising).

// #define BLE_MULTI_ADV_INSTANCES             (0)


// /**
//  * This enables extended advertising feature.
//  */
// #define BLE_EXT_ADV                         (0)

// /**
//  * This allows to configure maximum size of advertising data and
//  * scan response data used in LE Advertising Extensions.
//  * Valid range 31-238.
//  */
// #define BLE_EXT_ADV_MAX_SIZE                (31)

/**
 * @brief   This enables extended advertising feature
 */
#define BLE_EXT_ADV                     (0)

/**
 * @brief   This allows to configure maximum size of advertising data and scan
 *          response data used in LE Advertising Extensions
 *
 * Valid range 31-238.
 */
#define BLE_EXT_ADV_MAX_SIZE            (31)

/**
 * @brief   The maximum number of concurrent connections
 */
#define BLE_MAX_CONNECTIONS             (1)

/**
 * @brief   This is the number of multi-advertising instances
 *
 * This is NOT the total number of advertising instances. The total number of
 * advertising instances is this number plus 1 (assuming the device supports
 * advertising).
 */
#define BLE_MULTI_ADV_INSTANCES         (0)

/**
 * @brief   Enables the Broadcaster bluetooth role [0,1]
 */
#define BLE_ROLE_BROADCASTER            (1)

/**
 * @brief   Enables the Central bluetooth role [0,1]
 */
#define BLE_ROLE_CENTRAL                (1)

/**
 * @brief   Enables the Observer bluetooth role [0,1]
 */
#define BLE_ROLE_OBSERVER               (1)

/**
 * @brief   Enables the Peripheral bluetooth role [0,1]
 */
#define BLE_ROLE_PERIPHERAL             (1)

/**
 * @brief   Enables the BLE whitelist for controlling who to connect to or
 *          accept a connection from [0,1]
 */
#define BLE_WHITELIST                   (1)


#endif /* SYSCFG_H */
