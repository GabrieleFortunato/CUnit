/*
 * print_result.c
 *
 *  Created on: 23 set 2017
 *      Author: Gabriele Fortunato
 */

#include "print_result.h"

static void print_new_line(){
	printf(NEW_LINE);
}

static void print_over_under_weight_M(float height, float weight, char sex){
	bmi(height,weight)>MAX_BMI_M?
			printf(PRINT_OVER_WEIGHT,over_weight(height,weight,sex)):
			printf(PRINT_UNDER_WEIGHT,under_weight(height,weight,sex));
}

static void print_over_under_weight_F(float height, float weight, char sex){
	bmi(height,weight)>MAX_BMI_F?
			printf(PRINT_OVER_WEIGHT,over_weight(height,weight,sex)):
			printf(PRINT_UNDER_WEIGHT,under_weight(height,weight,sex));
}

static void print_bmi(float weight, float height){
	printf(NEW_LINE BMI,bmi(height,weight));
}

static void print_corporature(char sex, float weight, float height){
	printf(SPEC_STRING,corporature(height,weight,sex));
}

static void print_over_under_weight(char sex, float weight, float height){
	sex==CHAR_M?print_over_under_weight_M(height,weight,sex):print_over_under_weight_F(height,weight,sex);
	print_new_line();
}

static bool ok_bmi_M(float weight, float height){
	return bmi(height,weight)<=MAX_BMI_M&&bmi(height,weight)>=MIN_BMI_M;
}

static bool ok_bmi_F(float weight, float height){
	return bmi(height,weight)<=MAX_BMI_F&&bmi(height,weight)>=MIN_BMI_F;
}

static bool ok_bmi(char sex, float height, float weight){
	return sex==CHAR_M?ok_bmi_M(weight,height):ok_bmi_F(weight,height);
}

void print_result(char sex, float weight, float height){
	print_bmi(weight,height);
	print_corporature(sex,weight,height);
	ok_bmi(sex,height,weight)?print_new_line():print_over_under_weight(sex,weight,height);
}
