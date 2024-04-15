
#include <stdio.h>

int count_ones_bits(int number);

int main(void){

    int number=0,result=0;

	printf("Enter an integer in decimal number system: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&number);
	result=count_ones_bits(number);
	fflush(stdin);
	fflush(stdout);
	printf("\r\nthe number of setBits is:%d",result);
	return 0;
}

int count_ones_bits(int number){

	int counts=0,i=0;

	for(i=0;i<31;i++){

		if(number&(1<<i)){
			counts++;
		}
	}
	return counts;
}
