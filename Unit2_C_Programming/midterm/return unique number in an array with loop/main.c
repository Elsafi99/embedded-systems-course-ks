/*
 * main.c
 *
 *  description :return unique number in an array with loop
 *      Author: elsafi
 */

#include <stdio.h>


int fill_array(int array[],int flags[]);
void unique_array(int array[],int size,int flags[]);


int main(void){

	int array1[50];
	int flags[50];
	int size=0;

	size=fill_array(array1,flags);
	unique_array(array1,size,flags);

	return 0;
}

int fill_array(int array[],int flags[]){
	int size=0,i=0;

	printf("Enter the array size:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&size);
	printf("\r\nEnter the  array elements:");
	fflush(stdin);
	fflush(stdout);
	for(i=0;i<size;i++){
	scanf("%d",&array[i]);
	flags[i]=22;
	}
	fflush(stdin);
	fflush(stdout);
	return size;
}


void unique_array(int array[],int size,int flags[]){

	int i=0,j=0;
	int counter=0;
	for(i=0;i<size;i++){
		counter=1;
		for(j=(i+1);j<size;j++){
			if(array[i]==array[j]){
				counter++;
				flags[j]=0;//repeated
			}
		}//for j
		if(flags[i]!=0){
			flags[i]=counter;
		}
	}//for i
	printf("\r\n the unique numbers:");

	for(i=0;i<size;i++){
		if(flags[i]==1){
			printf("%d\t",array[i]);
		}
	}//for unique
}//function
