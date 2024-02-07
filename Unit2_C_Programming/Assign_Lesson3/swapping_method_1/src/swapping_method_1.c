/*
 * swapping_method_1.C
 *
 *  Source Code to Swap Two Numbers
 *  Author: ELSAFI
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	    float a=0.0;
	    float b=0.0;
        float temp=0.0;
        //get a , b values
		printf(" Enter Value Of a = ");
		fflush(stdin);fflush(stdout);
		scanf("%f",&a);

		printf(" Enter Value Of b = ");
		fflush(stdin);fflush(stdout);
		scanf("%f",&b);
		//swapping using a temp_var method
		temp=a;
		a=b;
		b=temp;
        //print a b after swapping
		printf("\r\n After Swapping Value a=%4.2f",a);
		printf("\r\n After Swapping Value b=%3.2f",b);

		return EXIT_SUCCESS;
}
