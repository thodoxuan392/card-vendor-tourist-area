/*
 * keypad.h
 *
 *  Created on: May 13, 2023
 *      Author: xuanthodo
 */

#ifndef INC_DEVICE_KEYPAD_H_
#define INC_DEVICE_KEYPAD_H_

#include "stdio.h"
#include "stdbool.h"

typedef enum {
	KEY_0 = 0,
	KEY_1 = 1,
	KEY_2 = 2,
	KEY_3 = 3,
	KEY_4 = 4,
	KEY_5 = 5,
	KEY_6 = 6,
	KEY_7 = 7,
	KEY_8 = 8,
	KEY_9 = 9,
	KEY_STAR = 10,
	KEY_SHARP = 11,
}KEY_t;

bool KEYPAD_init();
uint8_t KEYPAD_is_pressed();
bool KEYPAD_test();

#endif /* INC_DEVICE_KEYPAD_H_ */
