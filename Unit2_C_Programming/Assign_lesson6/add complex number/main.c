/*
 ============================================================================
 Name        : main.c
 Author      : elsafi
 Version     :
 Copyright   : Your copyright notice
 Description : EXs add two complex numbers using structures
 ============================================================================
 */

#include <stdio.h>

struct Scomplex_num{

	double real;
	double img;
};

int main(void) {

  struct Scomplex_num number1,number2,result;

  printf("For 1st complex number:");
  //stores the first number
  printf("\r\nEnter the real and imaginary respectively:");
  fflush(stdin);
  fflush(stdout);
  scanf("%lf %lf",&number1.real,&number1.img);
  //stores the 2nd number
  printf("\r\nEnter the real and imaginary respectively:");
  fflush(stdin);
  fflush(stdout);
  scanf("%lf %lf",&number2.real,&number2.img);

  //calculation the result
  result.real=number1.real+number2.real;
  result.img=number1.img+number2.img;

  //display result information.
  printf("\r\nSum=%.1lf+%.1lfi",result.real,result.img);

	return 0;
}



