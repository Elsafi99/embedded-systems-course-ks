/*
 ============================================================================
 Name        : main.c
 Author      : elsafi
 Version     :
 Copyright   : Your copyright notice
 Description : EX4 stores student info using structure with array members
 ============================================================================
 */

#include <stdio.h>

struct Sstudent{

	char name[100];
	int roll;
	float marks;
};

int main(void) {

  struct Sstudent arr[10];
  int index=0;

  printf("Enter information of students:");
  for(index=0;index<10;index++){
    //store student roll
    printf("\r\nEnter the roll number:");
    fflush(stdin);
    fflush(stdout);
    scanf("%d",&arr[index].roll);
    //stores student name
    printf("\r\nEnter the name:");
    fflush(stdin);
    fflush(stdout);
    scanf("%s",arr[index].name);
   //store student marks
    printf("\r\nEnter the marks:");
    fflush(stdin);
    fflush(stdout);
    scanf("%f",&arr[index].marks);
  }

  //display student information.
  printf("\r\nDisplaying the information of the students");
  for(index=0;index<10;index++){
     printf("\r\nInformation for roll number:%d",arr[index].roll);
     printf("\r\nName:%s",arr[index].name);
     printf("\r\nMarks:%f",arr[index].marks);
  }


	return 0;
}


