/*
 ============================================================================
 Name        : check_even_odd.c
 Author      : ELSAFI
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int a=0;

    //get a  values
	printf(" Enter An Integer You Want To Check= ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&a);

    if((a%2)==0){
    	printf(" Integer Value:%d is Even",a);
    }
    else{
	    printf(" Integer Value:%d is Odd",a);
    }
	return EXIT_SUCCESS;
}
