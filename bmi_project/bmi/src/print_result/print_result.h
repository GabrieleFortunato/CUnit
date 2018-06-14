/*
 * print_result.h
 *
 *  Created on: 23 set 2017
 *      Author: Gabriele Fortunato
 */

#ifndef SRC_PRINT_RESULT_PRINT_RESULT_H_
#define SRC_PRINT_RESULT_PRINT_RESULT_H_

#include <stdio.h>
#include "bmi/bmi.h"
#include "intro/intro.h"

#define BMI                "Indice di massa corporea: %.1f\n"
#define SPEC_STRING		   "%s"
#define PRINT_OVER_WEIGHT  "\nEntita' del sovrappeso: kg %.1f"
#define PRINT_UNDER_WEIGHT "\nEntita' del sottopeso: kg %.1f"
#define PRINT_ID_WEIGHT    "\nPeso ideale: kg %.1f"

/**
 * Stampa a video i risultati
 * @param sex
 * @param weight
 * @param height
 */
void print_result(char sex, float weight, float height);

#endif /* SRC_PRINT_RESULT_PRINT_RESULT_H_ */
