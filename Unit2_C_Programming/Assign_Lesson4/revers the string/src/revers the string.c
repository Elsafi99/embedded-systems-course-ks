/*
 ============================================================================
 Name        : revers.c
 Author      : elsafi
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>


int get_string_length(char str[]);

int main()
{
    char str[50];
	char revesre_str[50];
    int length=0;
	int index=0;
	int i=0;

//enter the string
    printf("\r\nEnter The string: ");
    fflush(stdin);
    fflush(stdout);
    gets(str);

//reverse the string
   length=(get_string_length(str))-1;
	for(i=0,index=length;index>=0;index--,i++){
		revesre_str[i]=str[index];
	}
   if(index<0){
	 revesre_str[i]='\0';
   }

//display original string
	printf("\r\nthe string is :%s",str);

//display the reverse string
	printf("\r\nthe reverse string is :%s",revesre_str);

    return 0;
}

int get_string_length(char str[]){

	int length=0;

	while(str[length]!='\0'){
		length++;

	}

	return length;
}
