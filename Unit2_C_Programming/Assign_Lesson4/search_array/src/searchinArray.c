#include <stdio.h>

#define TRUE  1
#define FALSE 0

int main()
{
    float array[50]={0};
    int size=0;
	float search=0;
	char flag=0;
	int index=0;
	int search_index=0;
//enter the size of the array
    printf("\r\nEnter The Array Size: ");
    fflush(stdout); fflush(stdin);
    scanf("%d", &size);
//enter the array elements
   	for(index=0;index<size;index++){
		printf("\r\nelement %d=",(index+1));
        fflush(stdout); fflush(stdin);
        scanf("%f", &array[index]);		
	}
//enter the element number to know its location 	
		printf("\r\nenter tne element to be searched=");
        fflush(stdout); fflush(stdin);
        scanf("%f", &search);
//searching for that entered number in the array.
    for(index=0;index<size;index++){
	    if(search==array[index]){
		   flag=TRUE;
		   search_index=index+1;
		   break;
	    }
	}		
		
	if(flag==TRUE){
		printf("\r\nThe number location=%d",search_index);		
	}	
	else{
	    printf("\r\nThe number location is not found");		
	}	
    return 0;
}