/*
 ============================================================================
 Name        : Print_integer
 Author      : ELSAFI
 Version     : 0.0
 Copyright   : Your copyright notice
 Description : Print  " integer input by the user "
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(){

	int num=0;

	printf("enter the integer number=");
    fflush(stdin);fflush(stdout);
    scanf("%d",&num);
    printf("\r\n You Entered : %d",num);

	return 0;
}
