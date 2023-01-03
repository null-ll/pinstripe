#pragma once

#include <stdint.h>

void set_time(uint8_t h, uint8_t m, uint8_t s);
void get_time(uint8_t *h, uint8_t *m, uint8_t *s);
// void set_date(uint8_t d, uint8_t m);
// void get_date(uint8_t *d, uint8_t *m);