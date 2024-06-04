/*
 ============================================================================
 Name        : EX5_Pointer_array_structure.c
 Author      : ELSAFI
 Version     : v0.0
 Copyright   : open source
 Description : coding Pointer to array which its elements are pointers to structure
 ============================================================================
 */

#include <stdio.h>

struct data{
	char* Name;
	int ID;
};


int main(void) {

//declare structures members.
	struct data employee_1={"AHMED",23147};
	struct data employee_2={"ALEX",1002};
	struct data employee_3={"NOOR",45789};

//define array of pointers to structure members.
	struct data (*array[3])={&employee_1,&employee_2,&employee_3};

//define a pointer to that array of pointers to structure.
	/* pt is a pointer to array of 3 elements
	 * each element is a pointer to structure
	 */
	struct data (*(*pt)[3])=&array;
//display 2nd element in array
	printf("Employee Name:");
	printf("%s",(**(*pt+1)).Name);
	/*
	 * note::(**(*&array+1)).Name=(**(array+1)).Name=(**(array[0]+1)).Name=(*array[1]).Name=(*&employee_2).Name=employee_2.Name
	 */
    printf("\r\nEmployee ID:");
	printf("%d",(**(*pt+1)).ID);

	return 0;
}
