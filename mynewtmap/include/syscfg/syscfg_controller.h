/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

/**
 * @brief   Used by package management system to include BLE hardware drivers
 */
#define BLE_DEVICE                      (1)

/**
 * @brief   Used to enable hardware white list
 */
#define BLE_HW_WHITELIST_ENABLE         (1)

/**
 * @brief   The number of additional periods that will be allocated for strict
 *          scheduling
 *
 * The total # of periods allocated for strict scheduling will be equal to the
 * number of connections plus this number.
 */
#define BLE_LL_ADD_STRICT_SCHED_PERIODS (0)

/**
 * @brief   This option enables/disables the connection parameter request
 *          procedure
 *
 * This is implemented in the controller but is disabled by default.
 */
#define BLE_LL_CFG_FEAT_CONN_PARAM_REQ  (1)

/**
 * @brief   This option enables/disables the data length update procedure in the
 *          controller
 *
 * If enabled, the controller is allowed to change the size of tx/rx pdu's used
 * in a connection. This option has only minor impact on code size and non on
 * RAM.
 */
#define BLE_LL_CFG_FEAT_DATA_LEN_EXT    (1)

/**
 * @brief   This option is used to enable/disable the extended scanner filter
 *          policy feature
 *
 * Currently, this feature is not supported by the nimble controller.
 */
#define BLE_LL_CFG_FEAT_EXT_SCAN_FILT   (0)

/**
 * @brief   This option is used to enable/disable support for the 2Mbps PHY
 */
#define BLE_LL_CFG_FEAT_LE_2M_PHY       (0)

/**
 * @brief   This option is used to enable/disable support for the coded PHY
 */
#define BLE_LL_CFG_FEAT_LE_CODED_PHY    (0)

/**
 * @brief   This option is used to enable/disable support for LE Channel
 *          Selection Algorithm #2
 */
#define BLE_LL_CFG_FEAT_LE_CSA2         (0)

/**
 * @brief   This option enables/disables encryption support in the controller
 *
 * This option saves both both code and RAM.
 */
#define BLE_LL_CFG_FEAT_LE_ENCRYPTION   (1)

/**
 * @brief   This option allows a controller to send/receive LE pings
 *
 * Currently, this feature is not implemented by the controller so turning it on
 * or off has no effect.
 */
#define BLE_LL_CFG_FEAT_LE_PING         (MYNEWT_VAL_BLE_LL_CFG_FEAT_LE_ENCRYPTION)

/**
 * @brief   This option is used to enable/disable support for Extended
 *          Advertising Feature
 *
 * That means extended scanner, advertiser and connect.
 */
#define BLE_LL_CFG_FEAT_LL_EXT_ADV      (MYNEWT_VAL_BLE_EXT_ADV)

/**
 * @brief   This option is used to enable/disable LL privacy
 */
#define BLE_LL_CFG_FEAT_LL_PRIVACY      (1)

/**
 * @brief   This option allows a slave to initiate the feature exchange
 *          procedure
 *
 * This feature is implemented but currently has no impact on code or ram size
 */
#define BLE_LL_CFG_FEAT_SLAVE_INIT_FEAT_XCHG    (1)

/**
 * @brief   Used to set the initial maximum transmit PDU size in a connection
 *
 * If this is set to a value greater than 27, the controller will automatically
 * attempt to do the data length update procedure. The host can always tell the
 * controller to update this value.
 */
#define BLE_LL_CONN_INIT_MAX_TX_BYTES   (27)

/**
 * @brief   This is the minimum number of "slots" for WindowOffset value used
 *          for CONNECT_IND when creating new connection as a master
 *
 * Each slot is 1.25 msecs long. Increasing this value will delay first
 * connection event after connection is created. However, older TI CC254x
 * controllers cannot change connection parameters later if WindowOffset was set
 * to 0 in CONNECT_IND. To ensure interoperability with such devices set this
 * value to 2 (or more).
 */
#define BLE_LL_CONN_INIT_MIN_WIN_OFFSET (0)

/**
 * @brief   This is the number of "slots" allocated to a connection when
 *          scheduling connections
 *
 * Each slot is 1.25 msecs long. Note that a connection event may last longer
 * than the number of slots allocated here and may also end earlier (depending
 * on when the next scheduled event occurs and how much data needs to be
 * transferred in the connection). However, you will be guaranteed that a
 * connection event will be given this much time, if needed. Consecutively
 * scheduled items will be at least this far apart
 */
#define BLE_LL_CONN_INIT_SLOTS          (4)

/**
 * @brief   This option configure a max number of scheduled outstanding
 *          auxiliary packets for receive on secondary advertising channel
 */
#define BLE_LL_EXT_ADV_AUX_PTR_CNT      (0)

/**
 * @brief   Enumerated value based on our sca
 */
#define BLE_LL_MASTER_SCA               (4)

/**
 * @brief   The maximum PDU size that can be sent/received
 */
#define BLE_LL_MAX_PKT_SIZE             (251)

/**
 * @brief   Manufacturer ID
 *
 * Should be set to unique ID per manufacturer.
 */
#define BLE_LL_MFRG_ID                  (0xFFFF)

/**
 * @brief   The number of duplicate advertisers stored
 */
#define BLE_LL_NUM_SCAN_DUP_ADVS        (8)

/**
 * @brief   The number of advertisers from which we have heard a scan response
 *
 * Prevents sending duplicate events to host.
 */
#define BLE_LL_NUM_SCAN_RSP_ADVS        (8)

/**
 * @brief   The system clock accuracy of the device
 */
#define BLE_LL_OUR_SCA                  (60)

/**
 * @brief   The priority of the LL task
 */
#define BLE_LL_PRIO                     (0)

/**
 * @brief   Size of the resolving list
 */
#define BLE_LL_RESOLV_LIST_SIZE         (4)

/**
 * @brief   The number of random bytes that the link layer will try to always
 *          have available for the host to use
 *
 * Decreasing this value may cause host delays if the host needs lots of random
 * material often.
 */
#define BLE_LL_RNG_BUFSIZE              (32)

/**
 * @brief   Forces the scheduler on a central to schedule connections in fixed
 *          time intervals called periods
 *
 * If set to 0, the scheduler is not forced to do this. If set to 1, the
 * scheduler will only schedule connections at period boundaries. See comments
 * in ble_ll_sched.h for more details.
 */
#define BLE_LL_STRICT_CONN_SCHEDULING   (0)

/**
 * @brief   The maximum supported received PDU size
 */
#define BLE_LL_SUPP_MAX_RX_BYTES        (MYNEWT_VAL_BLE_LL_MAX_PKT_SIZE)

/**
 * @brief   The maximum supported transmit PDU size
 */
#define BLE_LL_SUPP_MAX_TX_BYTES        (MYNEWT_VAL_BLE_LL_MAX_PKT_SIZE)

/**
 * @brief   Transmit power level
 */
#define BLE_LL_TX_PWR_DBM               (0)

/**
 * @brief   The number of usecs per period
 */
#define BLE_LL_USECS_PER_PERIOD         (3250)

/**
 * @brief   Size of the LL whitelist
 */
#define BLE_LL_WHITELIST_SIZE           (8)

/**
 * @brief   Used by BSP packages to configure LP clock for controller
 */
#define BLE_LP_CLOCK                    (1)

/**
 * @brief   Determines the maximum rate at which the controller will send the
 *          number of completed packets event to the host
 *
 * Rate is in os time ticks.
 */
#define BLE_NUM_COMP_PKT_RATE           (((2000 * OS_TICKS_PER_SEC) / 1000))

/**
 * @brief   Allows the target or app to override the public device address used
 *          by the controller
 *
 * If all zero, the controller will attempt to retrieve the public device
 * address from its chip specific location. If non-zero, this address will be
 * used.
 */
#define BLE_PUBLIC_DEV_ADDR             ((uint8_t[6]){0x00, 0x00, 0x00, 0x00, 0x00, 0x00})

/**
 * @brief   The settling time of the high-frequency oscillator
 *
 * This is used to turn on/off the clock used for the radio (assuming the HW
 * supports this). This value is in microseconds.
 */
#define BLE_XTAL_SETTLE_TIME            (0)
