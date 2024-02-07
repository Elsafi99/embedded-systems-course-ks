/*
 ============================================================================
 Name        : AddTwoIntegers.c
 Author      : ELSAFI
 Version     : 0.0
 Copyright   : Your copyright notice
 Description : sum 2 integer numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int num1=0;
	int num2=0;
	int sum=0;

	printf(" Enter Two Integers = ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&num1,&num2);
	sum=num1+num2;
	printf("\r\n SUM=%d",sum);
	return EXIT_SUCCESS;
}
