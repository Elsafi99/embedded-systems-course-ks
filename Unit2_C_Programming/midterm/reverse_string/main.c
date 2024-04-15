#include <stdio.h>

void reverse_string(char str[]);
int string_length(char str[]);

int main(void) {

    char str[100];
	printf("enter the sentence: ");
	fflush(stdin);
	fflush(stdout);
	gets(str);
	printf("\r\nthe reversed  sentence: ");
	reverse_string(str);

	return 0;
}

void reverse_string(char str[]){
  int length=0;
  int word_start=0,word_end=0;
  int i=0,j=0;
  char reversed[100];

  length=string_length(str);
  word_start=length-1;
  word_end=length-1;
  while(word_start>0){
	  if(str[word_start]==' '){
		 i= word_start+1;
		 while(i<=word_end){
            reversed[j]=str[i];
            j++;
            i++;
		 }
		 reversed[j++]=' ';
		 word_end=word_start-1;
	  }
	  word_start--;
  }
  for(i=0;i<=word_end;i++){
	  reversed[j]=str[i];
	  j++;
  }
  reversed[j]='\0';
  printf("\r\n%s",reversed);

}

int string_length(char str[]){
	int i=0;
	while(str[i]!='\0'){
		i++;
	}
	return i;
}
