/*
 ============================================================================
 Name        : Find_Large_Num.c
 Author      : ELSAFI
 Version     :
 Copyright   : Your copyright notice
 Description : Find_Large_Num
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float a=0,b=0,c=0;
    //get a b c values
	printf(" Enter 3 Numbers= ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f %f",&a,&b,&c);

    if(a>b){
    	if(a>c){
    		printf(" Largest Number=%4.2f ",a);
    	}
    }
    else if(b>c){
    	printf(" Largest Number=%4.2f ",b);
    }
    else{
    	printf(" Largest Number=%4.2f ",c);
    }

	return EXIT_SUCCESS;
}
