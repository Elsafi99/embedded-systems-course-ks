/*
 ============================================================================
 Name        : check_char_alphabet.c
 Author      : ELSAFI
 Version     :
 Copyright   : Your copyright notice
 Description : check_char_alphabet
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	  char a='0';
	    //get character  values
		printf("\r\n Enter a Character= ");
		fflush(stdin);fflush(stdout);
		scanf("%c",&a);

	    if((a>='a')&&(a<='z')){
	    		printf("\r\n %c is Alphabet",a);
	    }
	    else if((a>='A')&&(a<='Z')){
	    	printf("\r\n %c is Alphabet",a);
	    }
	    else{
	    	printf("\r\n %c is Not An Alphabet",a);
	    }

	    return EXIT_SUCCESS;
}
