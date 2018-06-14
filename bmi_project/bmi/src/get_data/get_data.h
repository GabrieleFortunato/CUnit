/*
 * get_data.h
 *
 *  Created on: 23 set 2017
 *      Author: gabriele
 */

#ifndef SRC_GET_DATA_GET_DATA_H_
#define SRC_GET_DATA_GET_DATA_H_

#include <stdio.h>
#include <ctype.h>

#define HEIGHT      "\nInserisci l'altezza> cm "
#define WEIGHT      "Inserisci il peso> kg "
#define SEX         "Inserisci il sesso (M-F)> "
#define SPEC_FLOAT  "%f"
#define SPEC_CHAR   "%c"
#define SPEC_STRING "%s"
#define INIT_SEX    'S'
#define CHAR_M 		'M'
#define CHAR_F 		'F'
#define FLOAT_ZERO  0.0
#define HUNDRED     100.0

/**
 * Inserimento da tastiera dell'altezza
 * @return
 */
float get_height(void);

/**
 * Inserimento da tastiera del peso
 * @return
 */
float get_weight(void);

/**
 * Inserimento da tastiera del sesso
 * @return
 */
char get_sex(void);

#endif /* SRC_GET_DATA_GET_DATA_H_ */
