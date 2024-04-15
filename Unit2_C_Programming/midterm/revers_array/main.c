#include <stdio.h>


int fill_array(int array[]);
void display_array(int array[],int size);
void reverse_array(int array[],int size);


int main(void){

	int array1[50];
	int size=0;

	size=fill_array(array1);
	reverse_array(array1,size);
	printf("\r\nThe result of a reversed array is :");
	display_array(array1,size);

	return 0;
}

int fill_array(int array[]){
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
	}
	fflush(stdin);
	fflush(stdout);
	return size;
}
void display_array(int array[],int size){
	int i=0;

	for(i=0;i<size;i++){
	printf("\t%d",array[i]);
	}
}

void reverse_array(int array[],int size){

	int reverse[50];
	int i=0,r=0;
	//reverse the array
	for((i=(size-1),r=0);i>=0;i--,r++){
	   reverse[r]=array[i];
	}
	//refill the array
	for(i=0;i<size;i++){
	   array[i]=reverse[i];
	}

}


