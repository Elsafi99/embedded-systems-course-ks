
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
	printf("\r\nthe max number of setBits between two 0 is:%d",result);
	return 0;
}

int count_ones_bits(int number){

	int counts=0,i=0;
    int number_ones=0;

	for(i=0;i<31;i++){

		if(number&(1<<i))
		{
			counts++;
		}
		else{//1st else
			  if(number_ones>counts)
			    {
				 counts=0;
		 	    }
			  else{//2nd else
				 number_ones=counts;
				 counts=0;
			      }//2nd else
		    }//1st else
	}//for

	return number_ones;
}//main

