/*
 ============================================================================
 Name        : transpose2dArray.c
 Author      : elsafi
 Version     :  0
 Copyright   : Your copyright notice
 Description : EX3 Transpose array 2d
 ============================================================================
 */
#include <stdlib.h>
#include <stdio.h>

int main(void) {

	float matrix[25][25]={0};
	float tr_matrix[25][25]={0};
	int index_r=0,index_c=0,row=0,coloumn=0;

	printf("Enter the Numbers of Row,Column: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d",&row,&coloumn);
	printf("\n\rEnter the elements of the matrix: ");
//get matrix ::-
	for(index_r=0;index_r<row;index_r++){
		for(index_c=0;index_c<coloumn;index_c++){
			printf("\n\rEnter the elements m%d%d=",index_r,index_c);
			fflush(stdin);
			fflush(stdout);
			scanf("%f",&matrix[index_r][index_c]);
		}
	}
//display matrix
	printf("\n\rThe entered matrix: \n");
	for(index_r=0;index_r<row;index_r++){
		for(index_c=0;index_c<coloumn;index_c++){
            printf("%.2f\t",matrix[index_r][index_c]);
		}
		printf("\n");
	}
//transpose the matrix
	printf("\n\rThe Transpose of the matrix: \n");
	for(index_r=0;index_r<row;index_r++){
		for(index_c=0;index_c<coloumn;index_c++){
			tr_matrix[index_c][index_r]=matrix[index_r][index_c];
		}
	}
//display the transpose of the matrix
	for(index_r=0;index_r<coloumn;index_r++){
		for(index_c=0;index_c<row;index_c++){
	           printf("%.2f\t",tr_matrix[index_r][index_c]);
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
