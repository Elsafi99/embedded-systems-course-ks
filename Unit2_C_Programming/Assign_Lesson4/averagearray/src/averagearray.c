/*
 ============================================================================
 Name        : averagearray.c
 Author      : elsafi
 Version     :
 Copyright   : Your copyright notice
 Description : get average f
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float number[50]={0},sum=0,average=0,data_numbers=0.0;
	int index=0;
	printf("Enter the Numbers of Data: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&data_numbers);
	if(data_numbers<0.0 || data_numbers>50){
		printf("Your Data Number is out of array size ! \n");
		printf("Enter the New Numbers of Data: ");
		fflush(stdin);
		fflush(stdout);
		scanf("%f",&data_numbers);
	}
	printf("\nthe Numbers of Data:%.0f",data_numbers);
	for(index=0;index<data_numbers;index++){

		printf("\n%d.Enter the Number: ",(index+1));
		fflush(stdin);
		fflush(stdout);
		scanf("%f",&number[index]);
		sum+=number[index];
	}
        average=(sum/data_numbers);
		printf("\nthe Average of Data:%.2f",average);


	return EXIT_SUCCESS;
}