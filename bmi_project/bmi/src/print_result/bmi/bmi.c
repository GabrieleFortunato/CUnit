/*
 * bmi.c
 *
 *  Created on: 23 set 2017
 *      Author: Gabriele Fortunato
 */

#include "bmi.h"
#include <stdio.h>

static bool is_valid_sex(char sex){
	return sex==CHAR_M||sex==CHAR_F;
}

float bmi(float height, float weight){
	return weight/height/height;
}

static char* corporature_M(float height, float weight){
	return
			(bmi(height,weight)>EXTRA_MAX_BMI_M)?EXTRA_OVER_WEIGHT:
					(bmi(height,weight)>MAX_BMI_M)?OVER_WEIGHT:
							(bmi(height,weight)>=MIN_BMI_M)?OK_WEIGHT:
									(bmi(height,weight)>=EXTRA_MIN_BMI_M)?UNDER_WEIGHT:EXTRA_UNDER_WEIGHT;
}

static char* corporature_F(float height, float weight){
	return
			bmi(height,weight)>EXTRA_MAX_BMI_F?EXTRA_OVER_WEIGHT:
					bmi(height,weight)>MAX_BMI_F?OVER_WEIGHT:
							bmi(height,weight)>=MIN_BMI_F?OK_WEIGHT:
									bmi(height,weight)>=EXTRA_MIN_BMI_F?UNDER_WEIGHT:EXTRA_UNDER_WEIGHT;
}

char* corporature(float height, float weight, char sex){
	assert(is_valid_sex(sex));
	return sex==CHAR_M?corporature_M(height,weight):corporature_F(height,weight);
}

static float over_weight_M(float height, float weight){
	assert(bmi(height,weight)>MAX_BMI_M);
	return bmi(height,weight)-MAX_BMI_M*height*height;
}

static float over_weight_F(float height, float weight){
	assert(bmi(height,weight)>MAX_BMI_F);
	return (bmi(height,weight)-MAX_BMI_F)*height*height;
}

float over_weight(float height, float weight, char sex){
	assert(is_valid_sex(sex));
	return sex==CHAR_M?over_weight_M(height,weight):over_weight_F(height,weight);
}

static float under_weight_M(float height, float weight){
	assert(bmi(height,weight)<MIN_BMI_M);
	return (MIN_BMI_M-bmi(height,weight))*height*height;
}

static float under_weight_F(float height, float weight){
	assert(bmi(height,weight)<MIN_BMI_F);
	return (MIN_BMI_F-bmi(height,weight))*height*height;
}

float under_weight(float height, float weight, char sex){
	assert(is_valid_sex(sex));
	return sex==CHAR_M?under_weight_M(height,weight):under_weight_F(height,weight);
}
