/////////////////////////////////////////////////////////////////
//                           Settings                          //
/////////////////////////////////////////////////////////////////


/***************************************************
          NodeMCU Pin Assignment
 **************************************************/

#define RX_PIN_NODEMCU        14                  // D5 or GPIO 14 || RX or GPIO 03 -->  Nodemcu pin, used has RX pin
#define TX_PIN_NODEMCU        12                  // D6 or GPIO 12 || TX or GPIO 01 -->  Nodemcu pin, used has TX pin

/* Relay to NodeMCU Connection */

#define RELAY_PIN_1           4                   // D2 or GPIO 4
#define RELAY_PIN_2           5                   // D1 or GPIO 5
#define RELAY_PIN_3           2                   // D4 or GPIO 2
#define RELAY_PIN_4           16                  // D0 or GPIO 16

/* NodeMCU to Push Button switch  */

#define PUSH_BUTTON_1         13                  // D7 or GPIO 13
#define PUSH_BUTTON_2         0                   // D3 or GPIO 0
//#define PUSH_BUTTON_3       14                  // D  or GPIO
//#define PUSH_BUTTON_4       10                  // D  or GPIO

/***************************************************
          PZEM address value assignment
 **************************************************/

#define PZEM_SLAVE_1_ADDRESS     0x01                       // Make sure you assign address to pzem first before you use
#define PZEM_SLAVE_2_ADDRESS     0xF7
#define PZEM_SLAVE_3_ADDRESS     0x02

/* PZEM how often you wish to get PZEM data */

#define PZEM_DATA_RETRIVAL_TIME  1000                       // Enter time in milliseconds 

/***************************************************
          variable value assignment
 **************************************************/

#define VOLTAGE_1_CUTOFF         180                        // Voltage cut off value. If voltage is less than this value, then it switch off the relay 
#define VOLTAGE_2_CUTOFF         180
#define VOLTAGE_3_CUTOFF         180

/***************************************************
          Blynk Virtual Pin Assignment
 **************************************************/

/* Blynk button vpin */

#define VPIN_BUTTON_1                 V1
#define VPIN_BUTTON_2                 V2
#define VPIN_BUTTON_3                 V3
#define VPIN_BUTTON_4                 V4

#define VPIN_AUTO_MODE_BUTTON_1       V5                     // This button is to switch on motor in auto mode

/* Blynk Labeled Value vpin */

#define vPIN_VOLTAGE_1                V11
#define vPIN_CURRENT_USAGE_1          V12
#define vPIN_ACTIVE_POWER_1           V13
#define vPIN_ACTIVE_ENERGY_1          V14
#define vPIN_FREQUENCY_1              V15
#define vPIN_POWER_FACTOR_1           V16
#define vPIN_OVER_POWER_ALARM_1       V17

#define vPIN_VOLTAGE_2                V21
#define vPIN_CURRENT_USAGE_2          V22
#define vPIN_ACTIVE_POWER_2           V23
#define vPIN_ACTIVE_ENERGY_2          V24
#define vPIN_FREQUENCY_2              V25
#define vPIN_POWER_FACTOR_2           V26
#define vPIN_OVER_POWER_ALARM_2       V27

#define vPIN_VOLTAGE_3                V31
#define vPIN_CURRENT_USAGE_3          V32
#define vPIN_ACTIVE_POWER_3           V33
#define vPIN_ACTIVE_ENERGY_3          V34
#define vPIN_FREQUENCY_3              V35
#define vPIN_POWER_FACTOR_3           V36
#define vPIN_OVER_POWER_ALARM_3       V37

/***************************************************
          Server Settings
 **************************************************/

#define OTA_HOSTNAME "3 Phase Failure Automation"            // OTA name
