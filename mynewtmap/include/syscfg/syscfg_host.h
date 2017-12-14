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
 * @brief   The preferred MTU to indicate in MTU exchange commands
 */
#define BLE_ATT_PREFERRED_MTU           (256)

/**
 * @brief   Enables processing of incoming Find Information Request ATT commands
 *          [0,1]
 */
#define BLE_ATT_SVR_FIND_INFO           (1)

/**
 * @brief   Enables processing of incoming Find By Type Value Request ATT
 *          commands [0,1]
 */
#define BLE_ATT_SVR_FIND_TYPE           (1)

/**
 * @brief   Enables processing of incoming Handle Value Indication ATT commands
 *          [0,1]
 */
#define BLE_ATT_SVR_INDICATE            (1)

/**
 * @brief   A GATT server uses these when a peer performs a "write long
 *          characteristic values" or "write long characteristic descriptors"
 *          procedure
 *
 * One of these resources is consumed each time a peer sends a partial write.
 */
#define BLE_ATT_SVR_MAX_PREP_ENTRIES    (64)

/**
 * @brief   Enables processing of incoming Handle Value Notification ATT
 *          commands [0,1]
 */
#define BLE_ATT_SVR_NOTIFY              (1)

/**
 * @brief   Enables processing of incoming Prepare Write Request and Execute
 *          Write Request ATT commands [0,1]
 */
#define BLE_ATT_SVR_QUEUED_WRITE        (1)

/**
 * @brief   Expiry time for incoming ATT queued writes (ms)
 *
 * If this much time passes since the previous prepared write was received, the
 * connection is terminated.
 * A value of 0 means no timeout.
 */
#define BLE_ATT_SVR_QUEUED_WRITE_TMO    (30000)

/**
 * @brief   Enables processing of incoming Read Request ATT commands [0,1]
 */
#define BLE_ATT_SVR_READ                (1)

/**
 * @brief   Enables processing of incoming Read Blob Request ATT commands [0,1]
 */
#define BLE_ATT_SVR_READ_BLOB           (1)

/**
 * @brief   Enables processing of incoming Read by Group Type Request ATT
 *          commands [0,1]
 */
#define BLE_ATT_SVR_READ_GROUP_TYPE     (1)

/**
 * @brief   Enables processing of incoming Read Multiple Request ATT commands
 *          [0,1]
 */
#define BLE_ATT_SVR_READ_MULT           (1)

/**
 * @brief   Enables processing of incoming Read By Type Request ATT commands
 *          [0,1]
 */
#define BLE_ATT_SVR_READ_TYPE           (1)

/**
 * @brief   Enables processing of incoming Signed Write Command ATT commands
 *          [0,1]
 */
#define BLE_ATT_SVR_SIGNED_WRITE        (1)

/**
 * @brief   Enables processing of incoming Write Request ATT commands [0,1]
 */
#define BLE_ATT_SVR_WRITE               (1)

/**
 * @brief   Enables processing of incoming Write Command ATT commands [0,1]
 */
#define BLE_ATT_SVR_WRITE_NO_RSP        (1)

/**
 * @brief   Enables the Discover All Characteristics of a Service GATT procedure
 *          [0,1]
 */
#define BLE_GATT_DISC_ALL_CHRS          (MYNEWT_VAL_BLE_ROLE_CENTRAL)

/**
 * @brief   Enables the Discover All Primary Services GATT procedure [0,1]
 */
#define BLE_GATT_DISC_ALL_DSCS          (MYNEWT_VAL_BLE_ROLE_CENTRAL)

/**
 * @brief   Enables the Discover All Primary Services GATT procedure [0,1]
 */
#define BLE_GATT_DISC_ALL_SVCS          (MYNEWT_VAL_BLE_ROLE_CENTRAL)

/**
 * @brief   Enables the Discover Characteristics by UUID GATT procedure [0,1]
 */
#define BLE_GATT_DISC_CHR_UUID          (MYNEWT_VAL_BLE_ROLE_CENTRAL)

/**
 * @brief   Enables the Discover Primary Services by Service UUID GATT procedure
 *          [0,1]
 */
#define BLE_GATT_DISC_SVC_UUID          (MYNEWT_VAL_BLE_ROLE_CENTRAL)

/**
 * @brief   Enables the Find Included Services GATT procedure [0,1]
 */
#define BLE_GATT_FIND_INC_SVCS          (MYNEWT_VAL_BLE_ROLE_CENTRAL)

/**
 * @brief   Enables sending and receiving of GATT indications [0,1]
 */
#define BLE_GATT_INDICATE               (1)

/**
 * @brief   The maximum number of concurrent client GATT procedures [0,1]
 */
#define BLE_GATT_MAX_PROCS              (4)

/**
 * @brief   Enables sending and receiving of GATT notifications [0,1]
 */
#define BLE_GATT_NOTIFY                 (1)

/**
 * @brief   Enables the Read Characteristic Value GATT procedure [0,1] (0/1)
 */
#define BLE_GATT_READ                   (MYNEWT_VAL_BLE_ROLE_CENTRAL)

/**
 * @brief   Enables the Read Long Characteristic Values GATT procedure [0,1]
 */
#define BLE_GATT_READ_LONG              (MYNEWT_VAL_BLE_ROLE_CENTRAL)

/**
 * @brief   The maximum number of attributes that can be read with a single GATT
 *          Read Multiple Characteristic Values procedure [0,1]
 */
#define BLE_GATT_READ_MAX_ATTRS         (8)

/**
 * @brief   Enables the Read Multiple Characteristic Values GATT procedure [0,1]
 */
#define BLE_GATT_READ_MULT              (MYNEWT_VAL_BLE_ROLE_CENTRAL)

/**
 * @brief   Enables the Read Using Characteristic UUID GATT procedure [0,1]
 */
#define BLE_GATT_READ_UUID              (MYNEWT_VAL_BLE_ROLE_CENTRAL)

/**
 * @brief   The rate to periodically resume GATT procedures that have stalled
 *          due to memory exhaustion [0,1]  Units are milliseconds [0,1]
 */
#define BLE_GATT_RESUME_RATE            (1000)

/**
 * @brief   Enables the Signed Write Without Response GATT procedure [0,1]
 */
#define BLE_GATT_SIGNED_WRITE           (MYNEWT_VAL_BLE_ROLE_CENTRAL)

/**
 * @brief   Enables the Write Characteristic Value GATT procedure [0,1]
 */
#define BLE_GATT_WRITE                  (MYNEWT_VAL_BLE_ROLE_CENTRAL)

/**
 * @brief   Enables the Write Long Characteristic Values GATT procedure [0,1]
 */
#define BLE_GATT_WRITE_LONG             (MYNEWT_VAL_BLE_ROLE_CENTRAL)

/**
 * @brief   The maximum number of attributes that can be written with a single
 *          GATT Reliable Write procedure [0,1]
 */
#define BLE_GATT_WRITE_MAX_ATTRS        (4)

/**
 * @brief   Enables the Write Without Response GATT procedure [0,1]
 */
#define BLE_GATT_WRITE_NO_RSP           (MYNEWT_VAL_BLE_ROLE_CENTRAL)

/**
 * @brief   Enables the Reliable Writes GATT procedure [0,1]
 */
#define BLE_GATT_WRITE_RELIABLE         (MYNEWT_VAL_BLE_ROLE_CENTRAL)

/**
 * @brief   Indicates that a BLE host is present
 */
#define BLE_HOST                        (1)

/**
 * @brief   Enables extra runtime assertions
 */
#define BLE_HS_DEBUG                    (0)

/**
 * @brief   Rather than wait for HCI acknowledgements from a controller, the
 *          host simulates incoming acks
 *
 * Only recommended for test code running in the simulator.
 */
#define BLE_HS_PHONY_HCI_ACKS           (0)

/**
 * @brief   Specifies whether the host can depend on the kernel being present
 *
 * This should only be disabled for unit tests running in the simulator.
 */
#define BLE_HS_REQUIRE_OS               (1)

/**
 * @brief   Defines maximum number of LE Connection Oriented Channels channels
 *
 * When set to (0), LE COC is not compiled in.
 */
#define BLE_L2CAP_COC_MAX_NUM           (0)

/**
 * @brief   Whether to collapse incoming L2CAP fragments into a minimal set of
 *          mbufs
 *
 * 1: Slower, more memory efficient.
 * 0: Faster, less memory efficient.
 */
#define BLE_L2CAP_JOIN_RX_FRAGS         (1)

/**
 * @brief   The number of L2CAP channels to allocate
 *
 * The default value allows for the signal, ATT, and SM channels for each
 * connection.
 */
#define BLE_L2CAP_MAX_CHANS             (3*MYNEWT_VAL_BLE_MAX_CONNECTIONS)

/**
 * @brief   Expiry time for incoming data packets (ms)
 *
 * If this much time passes since the previous fragment was received, the
 * connection is terminated.
 * A value of 0 means no timeout.
 */
#define BLE_L2CAP_RX_FRAG_TIMEOUT       (30000)

/**
 * @brief   The maximum number of concurrent L2CAP signal procedures
 */
#define BLE_L2CAP_SIG_MAX_PROCS         (1)

/**
 * @brief   Enable Bluetooth Mesh
 */
#define BLE_MESH                        (0)

/**
 * @brief   Size of internal buffer for console output
 *
 * Any line exceeding this length value will be split.
 */
#define BLE_MONITOR_CONSOLE_BUFFER_SIZE (128)

/**
 * @brief   Enables monitor interface over RTT
 */
#define BLE_MONITOR_RTT                 (0)

/**
 * @brief   Enables buffering when using monitor interface over RTT
 *
 * The data are written to RTT once complete packet is created in intermediate
 * buffer. This allows to skip complete packet if there is not enough space in
 * RTT buffer (e.g. there is no reader connected). If disabled, monitor will
 * simply block waiting for RTT to free space in buffer.
 */
#define BLE_MONITOR_RTT_BUFFERED        (1)

/**
 * @brief   Monitor interface upstream buffer name
 */
#define BLE_MONITOR_RTT_BUFFER_NAME     ("monitor")

/**
 * @brief   Monitor interface upstream buffer size
 */
#define BLE_MONITOR_RTT_BUFFER_SIZE     (256)

/**
 * @brief   Enables monitor interface over UART
 */
#define BLE_MONITOR_UART                (0)

/**
 * @brief   Baudrate for monitor interface UART
 */
#define BLE_MONITOR_UART_BAUDRATE       (1000000)

/**
 * @brief   Monitor interface ringbuffer size for UART
 *
 * This value should be a power of 2.
 */
#define BLE_MONITOR_UART_BUFFER_SIZE    (64)

/**
 * @brief   Monitor interface UART device
 */
#define BLE_MONITOR_UART_DEV            ("uart0")

/**
 * @brief   The rate that new random addresses should be generated (seconds)
 */
#define BLE_RPA_TIMEOUT                 (300)

/**
 * @brief   Enables bonding (persistence and restoration of secure links) [0,1]
 */
#define BLE_SM_BONDING                  (0)

/**
 * @brief   The IO capabilities to report during pairing
 *
 * Valid values are:
 * BLE_HS_IO_DISPLAY_ONLY
 * BLE_HS_IO_DISPLAY_YESNO
 * BLE_HS_IO_KEYBOARD_ONLY
 * BLE_HS_IO_NO_INPUT_OUTPUT
 * BLE_HS_IO_KEYBOARD_DISPLAY
 */
#define BLE_SM_IO_CAP                   (BLE_HS_IO_NO_INPUT_OUTPUT)

/**
 * @brief   Whether keypress support is advertised during pairing [0,1]
 */
#define BLE_SM_KEYPRESS                 (0)

/**
 * @brief   Security manager legacy pairing
 */
#define BLE_SM_LEGACY                   (1)

/**
 * @brief   The maximum number of concurrent security manager procedures
 */
#define BLE_SM_MAX_PROCS                (1)

/**
 * @brief   Whether man-in-the-middle protection is advertised during pairing
 *          [0,1]
 */
#define BLE_SM_MITM                     (0)

/**
 * @brief   Whether the out-of-band pairing algorithm is advertised [0,1]
 */
#define BLE_SM_OOB_DATA_FLAG            (0)

/**
 * @brief   A bitmap indicating which keys to distribute during pairing
 *
 * The bits are defined as follows:
 * 0x01: BLE_SM_PAIR_KEY_DIST_ENC
 * 0x02: BLE_SM_PAIR_KEY_DIST_ID
 * 0x04: BLE_SM_PAIR_KEY_DIST_SIGN
 * 0x08: BLE_SM_PAIR_KEY_DIST_LINK
 */
#define BLE_SM_OUR_KEY_DIST             (0)

/**
 * @brief   Security manager secure connections (4
 *
 * 2).
 */
#define BLE_SM_SC                       (0)

/**
 * @brief   A bitmap indicating which keys to accept during pairing
 *
 * The bits are defined as follows:
 * 0x01: BLE_SM_PAIR_KEY_DIST_ENC
 * 0x02: BLE_SM_PAIR_KEY_DIST_ID
 * 0x04: BLE_SM_PAIR_KEY_DIST_SIGN
 * 0x08: BLE_SM_PAIR_KEY_DIST_LINK
 */
#define BLE_SM_THEIR_KEY_DIST           (0)

/**
 * @brief   Maximum number of bonds that can be persisted
 *
 * Note: increasing this value may also require increasing the capacity of the
 * underlying storage mechanism.
 */
#define BLE_STORE_MAX_BONDS             (3)

/**
 * @brief   Maximum number of client characteristic configuration descriptors
 *          that can be persisted
 *
 * Note: increasing this value may also require increasing the capacity of the
 * underlying storage mechanism.
 */
#define BLE_STORE_MAX_CCCDS             (8)
