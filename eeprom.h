#ifndef INCLUDED_EEPROM_H
#define INCLUDED_EEPROM_H

#pragma once

#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

#include "picoprom.h"

bool eeprom_init();

void eeprom_writeImage(const uint8_t* buffer, size_t size);
void eeprom_writeValue(uint8_t value);
void eeprom_writeRandom();
void eeprom_writeIndex();

#if VERIFY_ROM
size_t eeprom_verifyImage(const uint8_t* buffer, size_t size, size_t offset);
size_t eeprom_readImage(uint8_t* buffer, size_t size, size_t offset);
#endif

#endif
