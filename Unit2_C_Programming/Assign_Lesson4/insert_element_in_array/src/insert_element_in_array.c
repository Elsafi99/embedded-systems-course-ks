/*
 ============================================================================
 Name        : insert_element_in_array.c
 Author      : elsafi
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdlib.h>
#include <stdio.h>

int main(void) {
	int array[20]={0};
	int size=0,insert=0,location=0;
	int index=0;
	printf("\n\rEnter the Number of elements of the array: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&size);
//get array ::-
		for(index=0;index<size;index++){
			printf("\n\rEnter the elements %d= ",(index+1));
			fflush(stdin);
			fflush(stdout);
			scanf("%d",&array[index]);
		}
//display the array
	printf("\n\rThe Array elements are:\r\n ");
	for(index=0;index<size;index++){
		printf("%d\t",array[index]);
	}
   if(index>=size)printf("\r\n");
//insert element to the array
	printf("\n\rThe number to be inserted:\r\n ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&insert);
//insert location to the array
	printf("\n\rThe Location to be inserted:\r\n ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&location);
//increase the current space
    if(location<=size){
        location=location-1;
      for(index=size;index>location;index--){
    	  array[index]=array[index-1];
                                             }
      array[location]=insert;
//display the array
      	printf("\n\rThe new Array elements are:\r\n ");
      	size++;
      	for(index=0;index<size;index++){
      		printf("%d\t",array[index]);
                                       }//for
                      }//if
    else{
        for(index=size;index<location;index++){
      	  array[index]=0;
             }
          array[location-1]=insert;
//display the array
          printf("\n\rThe new Array elements are:\r\n ");
          size+=(location-size);
          for(index=0;index<size;index++){
            printf("%d\t",array[index]);
                                         }//for
         }

	return EXIT_SUCCESS;
}
