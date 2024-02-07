/*
 ============================================================================
 Name        : factorial.c
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
	  int i=0;
	  unsigned  int factorial=1;

	    //get integer  values
		printf("\r\n Enter An Integer= ");
		fflush(stdin);fflush(stdout);
		scanf("%d",&a);

	    if(a==0){
	    	printf("\r\n Factorial=1 ");
                }
	    else if(a<0){
	    	printf("\r\n ERROR!! Factorial Of Negative Numbers Does not Exist.");
	                }
	    else{
	    	for(i=1;i<=a;i++){
	    		factorial=factorial*i;
	                       	}
	    	printf("\r\n Factorial =%u",factorial);
	        }

	    return EXIT_SUCCESS;
}
