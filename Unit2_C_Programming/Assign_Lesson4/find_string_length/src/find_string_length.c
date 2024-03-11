#include <stdio.h>



int get_string_length(char str[]);

int main()
{
    char str[100];
    int length=0;

//enter the string
    printf("\r\nEnter The string: ");
    fflush(stdin);
    fflush(stdout);
    gets(str);
//get the length of the string.
    length=get_string_length(str);

//print the frequency
	printf("\r\nThe length of the string is %d",length);

    return 0;
}

int get_string_length(char str[]){
	int length=0;

	while(str[length]!='\0'){
		length++;
	}

	return length;
}
