/*
 * get_data.c
 *
 *  Created on: 23 set 2017
 *      Author: gabriele
 */

#include "get_data.h"

float get_height(void){
	fflush(stdin);
	float height=FLOAT_ZERO;
	printf(SPEC_STRING,HEIGHT);
	scanf(SPEC_FLOAT,&height);
	height = height/HUNDRED;
	return height;
}

float get_weight(void){
	fflush(stdin);
	float weight=FLOAT_ZERO;
	printf(SPEC_STRING,WEIGHT);
	scanf(SPEC_FLOAT,&weight);
	return weight;
}

char get_sex(){
	fflush(stdin);fflush(stdin);
	char sex = INIT_SEX;
	printf(SPEC_STRING,SEX);
	scanf(SPEC_CHAR,&sex);
	sex = toupper(sex);
	return sex!=CHAR_M&&sex!=CHAR_F?get_sex():sex;
}
