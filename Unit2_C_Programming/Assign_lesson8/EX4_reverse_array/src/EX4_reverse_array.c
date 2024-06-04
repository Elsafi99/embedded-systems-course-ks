/*
 ============================================================================
 Name        : EX4_reverse_array.c
 Author      : ELSAFI
 Version     : v0.0
 Copyright   : open source
 Description : Reverse array using pointer
 ============================================================================
 */

#include <stdio.h>

int main(void) {

int array[15];
int rev_array[15];

//pointer to the array
int (*pt_ar)[15]=&array;
//pointer to reverse of the array
int (*pt_rev)[15]=&rev_array;

int size=0;
int index=0;
int length=0;

//display and get array size
printf("\r\nInput the number of elements to store in the array(max=15):");
fflush(stdin);
fflush(stdout);
scanf("%d",&size);
//test the array size and ensure that is less or equal 15.
if(size>15){
	printf("\r\nError the array size must be less or equal 15");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&size);
           }
//get the array elements(fill the array)
printf("\r\nInput %d number of elements in the array:",size);
for(index=0;index<=(size-1);index++){//for
    printf("\r\nElement-%d:",(index+1));
    fflush(stdin);
    fflush(stdout);
    scanf("%d",*pt_ar);
    pt_ar++;
              }//for
    pt_ar--;
//assign and fill the reverse array by pointers
length=size;
while(length){//while
     **pt_rev=**pt_ar;
     length--;
     pt_ar--;
     pt_rev++;
           }//while

//assign reverse pointer with first element in the reverse array again.

pt_rev=&rev_array;
//display reversed array.
for(index=0;index<=(size-1);index++){//for
    printf("\r\nElement-%d:%d",index+1,**pt_rev);
    fflush(stdin);
    fflush(stdout);
    pt_rev++;
             }//for


	return 0;
}
