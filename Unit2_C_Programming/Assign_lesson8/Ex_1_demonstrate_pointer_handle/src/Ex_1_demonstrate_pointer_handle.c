/*
 ============================================================================
 Name        : Ex_1_demonstrate_pointer_handle.c
 Author      : ELSAFI
 Version     : v0.0
 Copyright   : open source
 Description : demonstrate how to handle a c code for pointer assign and operations.
 ============================================================================
 */

#include <stdio.h>

int main(void) {

//declare a wild pointer till now.
	 int* ab;
//declare and initialise variable .
	 int m=29;
//display the address and the value assigned to variable m.
	printf("Address of m=%p",&m);
	printf("\r\nValue of m=%d",m);
//assign the pointer with the address of m and display its info.
	ab=&m;
	printf("\r\nNow the ab is assigned with the m variable address");
	printf("\r\nThe address which is assigned in pointer ab=%p",ab);
	printf("\r\nContent of the pointer ab=%d",*ab);
//initialise new value in variable m.
	m=34;
	printf("\r\nThe value of m is assigned to %d now ",m);
//display pointer info now
	printf("\r\nThe address which is assigned in pointer ab =%p",ab);
	printf("\r\nContent of the pointer ab=%d",*ab);
//initialise new value in m variable with pointer now.
	*ab=7;
	printf("\r\nThe pointer variable is assigned with the value %d now",*ab);
//display info of m now.
	printf("\r\nAddress of m=%p",&m);
	printf("\r\nValue of m=%d",m);

	return 0;
}
