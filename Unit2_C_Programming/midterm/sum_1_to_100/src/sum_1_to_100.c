/*
 ============================================================================
 Name        : sum_1_to_100.c
 Author      : elsafi
 Version     :
 Copyright   : 
 Description : sum numbers from 1 to 100 without loop
 ============================================================================
 */

#include <stdio.h>

int sum(int max,int low);

int main(void) {

	int number1=0,number2=0;
    int max=0,low=0,result=0;

	printf("enter the numbers:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d",&number1,&number2);

    if(number1>number2){
    	max=number1;
    	low=number2;
    }
    else{
    	max=number2;
    	low=number1;
    }
    result=sum(max,low);
	fflush(stdin);
	fflush(stdout);
	printf(" the sum of the numbers:%d",result);

	return 0;
}

int sum(int max,int low){
	int result=0;

    if(max>=low)
    {
    result=max+sum(max-1,low);
    }

	return result;
}
