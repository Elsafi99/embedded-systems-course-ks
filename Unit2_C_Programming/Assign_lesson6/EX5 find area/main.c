/*
 ============================================================================
 Name        : main.c
 Author      : elsafi
 Version     :
 Copyright   : Your copyright notice
 Description : EX5 calculate area using macros
 ============================================================================
 */

#include <stdio.h>

#define PI 3.14159265359
#define area(r) (PI*r*r)

int main(void) {

	double r=0.0,result=0.0;

	printf("Enter the radius=");
	fflush(stdin);
	fflush(stdout);
	scanf("%lf",&r);

	result=area(r);
	printf("AREA=%.2lf",result);

	return 0;
}




