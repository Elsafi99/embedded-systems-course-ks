/*
 ============================================================================
 Name        : EX2_print_alphabets.c
 Author      : ELSAFI
 Version     : v0.0
 Copyright   : open source
 Description : print all alphabets using pointer.
 ============================================================================
 */

#include <stdio.h>

int main(void) {

//print all capital alphabets using pointer.
//declare a wild pointer.
char* alphabetp;
//declare a variable and initialise it with the ASCII code of A capital letter=65 in decimal.
char letter='A';
//Initialise the pointer with the letter variable.
alphabetp=&letter;

//display the capital alphabets using pointer by for while.
printf("\r\nThe alphabets are:\r\n");
while(*alphabetp<='Z'){
	//display letters.
	printf("%c\t",*alphabetp);
	//increment the pointer address to the next byte.
	(*alphabetp)++;
	//go to check the ASCII code is between A , Z.
}
	return 0;
}
