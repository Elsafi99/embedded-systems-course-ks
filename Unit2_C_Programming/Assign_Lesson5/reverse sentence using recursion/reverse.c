#include <stdio.h>

void reverse_string(void);

int main(void) {


	printf("enter the sentence ");
	fflush(stdin);
	fflush(stdout);
	reverse_string();

	return 0;
}

void reverse_string(void){
	char character;

	scanf("%c",&character);

	if(character!='\n'){
		reverse_string();
		printf("%c",character);
	}
}



