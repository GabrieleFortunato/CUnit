/*
 * repeat.h
 *
 *  Created on: 23 set 2017
 *      Author: gabriele
 */

#ifndef SRC_REPEAT_REPEAT_H_
#define SRC_REPEAT_REPEAT_H_

#include <stdbool.h>
#include <stdio.h>

#define REPEAT_ZERO  0
#define ONE       1
#define TWO       2
#define REPEAT    "\nCalcolare un altro indice massa corporea?"
#define ANSWERS   "\n(1=si, 2=no) "
#define SPEC_INT  "%d"

/**
 * Verifica l'intenzione dell'utente di calcolare
 * un altro indice massima corporea
 * @return
 */
bool repeat(void);

#endif /* SRC_REPEAT_REPEAT_H_ */
