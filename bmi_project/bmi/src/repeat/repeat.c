/*
 * repeat.c
 *
 *  Created on: 23 set 2017
 *      Author: gabriele
 */

#include "repeat.h"

static int get_repeat(void){
	int repeat = REPEAT_ZERO;
	do {
		printf(REPEAT ANSWERS);
		scanf(SPEC_INT,&repeat);
	}while (repeat!=ONE&&repeat!=TWO);
	return repeat;
}

bool repeat(void){
	return get_repeat()==ONE;
}
