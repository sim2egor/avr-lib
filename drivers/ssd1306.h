#ifndef SSD1306_H
#define SSD1306_H

typedef enum {
	SA0_LOW = 0b01111000,
	SA0_HIGH = 0b01111010,
} ssd1306_addr_t;

typedef enum {
	CTRL_DATA_STREAM = 0,
	CTRL_COMMAND = 0x80,
	CTRL_DATA = 0xC0,
} ssd1306_control_t;

typedef enum {
	SSD1306_DISPLAY_OFF = 0xAE,
	SSD1306_DISPLAY_ON = 0xAF,
	SSD1306_CLOCK_RATIO = 0xD5,
	SSD1306_MULTIPLEX_RATIO = 0xA8,
	SSD1306_CHARGE_PUMP = 0x8D,
	SSD1306_PRECHARGE_PERIOD = 0xD9,
	SSD1306_DISPLAY_RAM = 0xA4,
	SSD1306_DISPLAY_FILL = 0xA5,
	SSD1306_DISPLAY_NORMAL = 0xA6,
	SSD1306_DISPLAY_INVERSE = 0xA7,
	SSD1306_DISPLAY_CONTRAST = 0x81,
	SSD1306_VCOM_DESELECT_LEVEL = 0xDB,
} ssd1306_command_t;

#endif // SSD1306_H