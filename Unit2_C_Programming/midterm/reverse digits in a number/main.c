/*
 ============================================================================
 Name        : main.c
 Author      : elsafi
 Version     :
 Copyright   : Your copyright notice
 Description : code to reverse digits of a number
 ============================================================================
 */

#include <stdio.h>

int reverse_digits(int number);

int main(void) {

	int num=0;
	int result=0;

	printf("Enter the Number:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&num);
	result=reverse_digits(num);
	fflush(stdin);
	fflush(stdout);
	printf("\r\nThe reverse of the digits:%d",result);
	return 0;
}
int reverse_digits(int number){
	int reminder=0;
	int reverse=0;

	while(number!=0){
	  reminder=(number%10);
	  reverse=(reverse*10)+reminder;
	  number/=10;
	}
   return reverse;
}


