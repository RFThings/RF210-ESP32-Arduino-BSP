#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>
#include "soc/soc_caps.h"

#define EXTERNAL_NUM_INTERRUPTS 22
#define NUM_DIGITAL_PINS        22
#define NUM_ANALOG_INPUTS       6

static const uint8_t LED_BUILTIN = 4;
#define BUILTIN_LED  LED_BUILTIN // backward compatibility

#define analogInputToDigitalPin(p)  (((p)<NUM_ANALOG_INPUTS)?(analogChannelToDigitalPin(p)):-1)
#define digitalPinToInterrupt(p)    (((p)<NUM_DIGITAL_PINS)?(p):-1)
#define digitalPinHasPWM(p)         (p < EXTERNAL_NUM_INTERRUPTS)

static const uint8_t TX = 21;
static const uint8_t RX = 20;

static const uint8_t SDA = 5;
static const uint8_t SCL = 6;

static const uint8_t SS    = 7;
static const uint8_t MOSI  = 6;
static const uint8_t MISO  = 5;
static const uint8_t SCK   = 4;

static const uint8_t A0 = 0;
static const uint8_t A1 = 1;
static const uint8_t A2 = 2;
static const uint8_t A3 = 3;
static const uint8_t A4 = 4;
static const uint8_t A5 = 5;

// Pins for GNSS Quectel
static const uint8_t GPS_TX = 7;
static const uint8_t GPS_RX = 3;

#endif /* Pins_Arduino_h */
