/*
 ============================================================================
 Name        : SUM_NATURAL_NUM.c
 Author      : ELSAFI
 Version     :
 Copyright   : Your copyright notice
 Description : SUM_NATURAL_NUM
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	  int a=0;
	  int i=0;
	  int sum=0;

	    //get integer  values
		printf("\r\n Enter An Integer= ");
		fflush(stdin);fflush(stdout);
		scanf("%d",&a);

	    if(a>0){
               for(i=1;i<=a;i++){
            	   sum=sum+i;
                               }
	    	   printf("\r\n SUM=%d",sum);
	            }
	    else{
	    	printf("\r\n %d is Not A Natural Number",a);
	        }
	return EXIT_SUCCESS;
}
