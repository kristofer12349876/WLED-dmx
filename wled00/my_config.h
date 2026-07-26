#ifndef WLED_MY_CONFIG_H
#define WLED_MY_CONFIG_H

// Default LED-Data-Pin auf einen "toten" Pin legen (z. B. GPIO 32)
#undef DATA_PINS
#define DATA_PINS 32

// Störende Pins komplett deaktivieren (-1 = deaktiviert)
#undef RLYPIN
#define RLYPIN -1

#undef BTNPIN
#define BTNPIN -1

#endif
