#include <stdio.h>
#include <string.h>

#define TRUE  1
#define FALSE 0

int get_string_length(char str[]);

int main()
{
    char str[50];
    int length=0;
	char count=0;
	int index=0;
	char character_='0';

//enter the string
    printf("\r\nEnter The string: ");
    fflush(stdin);
    fflush(stdout);
    gets(str);

//enter the character  to know its frequency
		printf("\r\nenter tne character to get its frequency=");
        fflush(stdout); fflush(stdin);
        scanf("%c", &character_);


//searching for that entered character in the string.]
    length=get_string_length(str);
    for(index=0;index<=length;index++){
		if(character_==str[index]){
			count++;
		}
	}
//print the frequency
	printf("\r\nThe frequency of %c in the string is %d",character_,count);

    return 0;
}

int get_string_length(char str[]){
	int i=0;
	int length=0;

	while(str[i]!='\0'){
		length++;
		i++;
	}

	return length;
}

