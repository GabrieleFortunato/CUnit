/*
 ============================================================================
 Name        : bmi_test.c
 Author      : Gabriele Fortunato
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <CUnit/basic.h>
#include <stdio.h>
#include "print_result/bmi/bmi.h"
#include "print_result/print_result.h"

#define ZERO 0

void test_bmi(){
	CU_ASSERT_EQUAL((int)bmi(2.00,80),20);
	CU_ASSERT_EQUAL((int)bmi(1.68,88),31);
	CU_ASSERT_EQUAL((int)bmi(1.68,84),29);
	CU_ASSERT_EQUAL((int)bmi(1.68,80),28);
	CU_ASSERT_EQUAL((int)bmi(1.68,79),27);
	CU_ASSERT_EQUAL((int)bmi(1.68,64),22);
	CU_ASSERT_EQUAL((int)bmi(1.68,62),21);
	CU_ASSERT_EQUAL((int)bmi(1.68,59),20);
}

void test_corporature(){
	CU_ASSERT_STRING_EQUAL(corporature(1.68,88,'M'),"Soggetto in forte sovrappeso");
	CU_ASSERT_STRING_EQUAL(corporature(1.68,80,'F'),"Soggetto in forte sovrappeso");
	CU_ASSERT_STRING_EQUAL(corporature(1.68,80,'M'),"Soggetto in leggero sovrappeso");
	CU_ASSERT_STRING_EQUAL(corporature(1.68,67,'F'),"Soggetto in leggero sovrappeso");
	CU_ASSERT_STRING_EQUAL(corporature(1.68,67,'M'),"Soggetto in peso forma");
	CU_ASSERT_STRING_EQUAL(corporature(1.68,59,'M'),"Soggetto in peso forma");
	CU_ASSERT_STRING_EQUAL(corporature(1.68,54,'F'),"Soggetto in peso forma");
	CU_ASSERT_STRING_EQUAL(corporature(1.68,54,'M'),"Soggetto in leggero sottopeso");
	CU_ASSERT_STRING_EQUAL(corporature(1.68,50,'F'),"Soggetto in leggero sottopeso");
	CU_ASSERT_STRING_EQUAL(corporature(1.68,50,'M'),"Soggetto in forte sottopeso");
	CU_ASSERT_STRING_EQUAL(corporature(1.55,37,'F'),"Soggetto in forte sottopeso");
}

void test_overweight(){
	CU_ASSERT_EQUAL((int)over_weight(1.68,88,'M'),20);
	CU_ASSERT_EQUAL((int)over_weight(1.68,88,'F'),25);
	CU_ASSERT_EQUAL((int)over_weight(1.68,67,'F'),4);
}

void test_underweight(){
	CU_ASSERT_EQUAL((int)under_weight(1.68,50,'M'),6);
	CU_ASSERT_EQUAL((int)under_weight(1.55,37,'M'),11);
	CU_ASSERT_EQUAL((int)under_weight(1.55,37,'F'),6);
}

int init_suite_default(){
	return ZERO;
}

int clear_suite_default(){
	return ZERO;
}

int main(void) {
	CU_initialize_registry();
	CU_pSuite pSuite_A = CU_add_suite("SUITE BMI",init_suite_default,clear_suite_default);
	CU_add_test(pSuite_A,"test of bmi()",test_bmi);
	CU_pSuite pSuite_B = CU_add_suite("SUITE CORPORATURE",init_suite_default,clear_suite_default);
	CU_add_test(pSuite_B,"test of corporature()",test_corporature);
	CU_pSuite pSuite_C = CU_add_suite("SUITE OVER-UNDER",init_suite_default,clear_suite_default);
	CU_add_test(pSuite_C,"test of overweight()",test_overweight);
	CU_add_test(pSuite_C,"test of underweight()",test_underweight);
	CU_basic_set_mode(CU_BRM_VERBOSE);
	CU_basic_run_tests();
	CU_cleanup_registry();
	return CU_get_error();
}
