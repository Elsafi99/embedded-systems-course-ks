/*
 ============================================================================
 Name        : sum.c
 Author      : elsafi
 Version     :
 Copyright   : Your copyright notice
 Description : code to sum digits of a number
 ============================================================================
 */

#include <stdio.h>

int sum_digits(int number);

int main(void) {

	int num=0;
	int result=0;

	printf("Enter the Number:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&num);
	result=sum_digits(num);
	fflush(stdin);
	fflush(stdout);
	printf("\r\nThe Sum of the digits:%d",result);
	return 0;
}
int sum_digits(int number){
	int reminder=0;
	int sum=0;

	while(number!=0){
	  reminder=(number%10);
	  sum=sum+reminder;
	  number/=10;
	}
   return sum;
}
