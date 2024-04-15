/*
 * main.c
 *
 *  description: program to get the square root of a number
 *      Author: elsafi
 */

#include <stdio.h>
#include <math.h>

double square_root(double number);

int main(void) {

	double num=0;
	double result=0;

	printf("Enter the Number:");
	fflush(stdin);
	fflush(stdout);
	scanf("%lf",&num);
	result=square_root(num);
	fflush(stdin);
	fflush(stdout);
	printf("\r\nThe square root of the number:%.3lf",result);
	return 0;
}
double square_root(double number){
	double root=0;
	root=sqrt(number);
   return root;
}

