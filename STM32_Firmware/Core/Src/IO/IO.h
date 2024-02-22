#pragma once
#include <stdbool.h>
#include <stdint.h>

#include "stm32f401xc.h"

typedef struct pin_t {
    GPIO_TypeDef* port;
    uint16_t pin;
} pin_t;

// Digital_IO
typedef struct DigitalOut {
    pin_t pin;    
    int port;
    bool state;
} DigitalOut;

typedef struct DigitalIn {
    pin_t pin;
    uint8_t state;
} DigitalIn;

