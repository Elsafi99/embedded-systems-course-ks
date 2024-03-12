/*
 ============================================================================
 Name        : factorial.c
 Author      : ELSAFI
 Version     :
 Copyright   : Your copyright notice
 Description : get factorial using recursion function, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int factorial(int number);

int main(void) {

	int number=0;
    int result=0;

	printf("enter a positive integer: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&number);
	if(number<0){
		printf("error you entered a negative integer\n ");
		printf("enter a positive integer: ");
		fflush(stdin);
		fflush(stdout);
		scanf("%d",&number);
	}
	else if(number==0){
		printf("error you entered an integer=%d\n",number);
		printf("enter a positive integer: ");
		fflush(stdin);
		fflush(stdout);
		scanf("%d",&number);
	}
		result=factorial(number);
		printf("Factorial of %d =%d \n",number,result);
	return 0;
}

int factorial(int number){
   int result=0;
   if(number!=1 && number!=0){
      result=number*(factorial(number-1));
      return result;
   }
   return 1;
}

