/*
 ============================================================================
 Name        : SWAPPING_M_2.c
 Author      : ELSAFI
 Version     :
 Copyright   : Your copyright notice
 Description : Source Code to Swap Two Numbers
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>

int main(void) {

	    float a=0.0;
	    float b=0.0;

	    //get a , b values
		printf(" Enter Value Of a = ");
		fflush(stdin);fflush(stdout);
		scanf("%f",&a);

		printf(" Enter Value Of b = ");
		fflush(stdin);fflush(stdout);
		scanf("%f",&b);
		//swapping using multiplication  division method
		//check zero value to ignore accessing all variables with zero value.
        if(a==0.0){
        	a=b;
        	b=0.0;
        }
        else if(b==0.0){
        	b=a;
        	a=0.0;
        }
        else{
        	a=a*b;
        	b=a/b;
        	a=a/b;
        }
        //print a b after swapping
		printf("\r\n After Swapping Value a=%4.2f",a);
		printf("\r\n After Swapping Value b=%3.1f",b);

		return EXIT_SUCCESS;
}
