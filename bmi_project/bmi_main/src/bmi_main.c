/*
 ============================================================================
 Name        : bmi_main.c
 Author      : Gabriele Fortunato
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "access/access.h"
#include "close/close.h"
#include "get_data/get_data.h"
#include "intro/intro.h"
#include "print_result/print_result.h"
#include "repeat/repeat.h"

#define FILE_ACCESS_ERROR "Impossibile registrare l'accesso"

void file_not_opened(){
	puts(FILE_ACCESS_ERROR);
}

void calculate_bmi(){
	do{
		intro();
		print_result(get_sex(),get_weight(),get_height());
	} while(repeat());
	close();
}

int main() {
	FILE* file = fopen(FILE_NAME,FILE_MODE);
	(file==NULL)?file_not_opened():print_access(file);
	fclose(file);
	calculate_bmi();
	return EXIT_SUCCESS;
}
