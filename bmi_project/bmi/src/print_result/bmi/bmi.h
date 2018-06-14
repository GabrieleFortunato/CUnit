/*
 * bmi.h
 *
 *  Created on: 23 set 2017
 *      Author: gabriele
 */

#ifndef SRC_PRINT_RESULT_BMI_BMI_H_
#define SRC_PRINT_RESULT_BMI_BMI_H_

#include <assert.h>
#include <math.h>
#include <stdbool.h>

#define EXTRA_OVER_WEIGHT  "Soggetto in forte sovrappeso"
#define OVER_WEIGHT        "Soggetto in leggero sovrappeso"
#define OK_WEIGHT  		   "Soggetto in peso forma"
#define UNDER_WEIGHT       "Soggetto in leggero sottopeso"
#define EXTRA_UNDER_WEIGHT "Soggetto in forte sottopeso"
#define INIT_RESULT        "Result"
#define CHAR_M 			   'M'
#define CHAR_F 			   'F'
#define EXTRA_MAX_BMI_M    30.0
#define EXTRA_MAX_BMI_F    28.0
#define MAX_BMI_M          24.0
#define MAX_BMI_F          22.0
#define MIN_BMI_M          20.0
#define MIN_BMI_F          18.0
#define EXTRA_MIN_BMI_M    MIN_BMI_F
#define EXTRA_MIN_BMI_F    16.0

/**
 * Calcola l'indice di massa corporea
 * @param height
 * @param weight
 * @return
 */
float bmi(float height, float weight);

/**
 * Calcola la corporatura del soggetto
 * @pre il sesso deve essere una M o una F
 * @param height
 * @param weight
 * @param sex
 * @return
 */
char* corporature(float height, float weight, char sex);

/**
 * Calcola l'entità del sovrappeso
 * @pre l'indice di massa corporea deve essere maggiore di 24
 *      per gli uomini e maggiore di 22 per le donne
 * @param height
 * @param weight
 * @param sex
 * @return
 */
float over_weight(float height, float weight, char sex);

/**
 * Calcola l'entità del sovrappeso
 * @pre l'indice di massa corporea deve essere minore di 20
 *      per gli uomini e minore di 18 per le donne
 * @param height
 * @param weight
 * @param sex
 * @return
 */
float under_weight(float height, float weight, char sex);

#endif /* SRC_PRINT_RESULT_BMI_BMI_H_ */
