/*
 ============================================================================
 Name        : Ex3_reverse_string.c
 Author      : ELSAFI
 Version     : v0.0
 Copyright   : open source
 Description : reverse a string order using pointer.
 ============================================================================
 */

#include <stdio.h>

//declare a function to get the size of string.
int str_size(char* str);

int main(void) {

//declare an array for input string.
char str_input[100];
//declare an array for reverse string .
char str_reverse[100];
//declare a wild pointers for strings.
char* strp_reverse=str_reverse;
//declare size variable.
int size=0;
int index=0;


//initialise input string.
   printf("\r\nPointer:Print a string in reverse order:");
   printf("\r\n----------------------------------------------");
   printf("\r\nInput a string:");
   fflush(stdin);
   fflush(stdout);
   scanf("%s",str_input);
//get the string size.
 size=str_size(str_input);

//reverse the input string
   for(index=(size-1);index>=0;index--){
	   *strp_reverse=str_input[index];
	    strp_reverse++;
   }
   if(index<0){
       *strp_reverse='\0';
              }
   //display reverse string.
   printf("\r\nThe reverse of the string is :%s",str_reverse);

	return 0;
}


//function definition.

int str_size(char* str){
	int length=0;
	while(*str!='\0'){
		length++;
		str++;
	}
	return length;
}

