/*
 * main.c
 *
 *  description : prime number
 *      Author: elsafi
 */



#include <stdio.h>

int find_prime_numbers(int number);

int main(void) {

	int number1=0,number2=0,result=0,index=0;
	printf("enter two numbers:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d",&number1,&number2);
	printf("prime numbers between %d and %d are: ",number1,number2);

	for(index=++number1;index<number2;index++){
		result=find_prime_numbers(index);
	if(result){
		printf("%d ",index);
	          }
	                                          }
	return 0;
}

int find_prime_numbers(int number){
	int index=0;
	for(index=2;index<=(number/2);index++){
		if((number%index)==0){
			return 0;
		}
	}
	return 1;
}
