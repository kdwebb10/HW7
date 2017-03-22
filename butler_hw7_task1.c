/*
 * =====================================================================================
 *
 *       Filename:  butler_hw7_task1.c
 *       	Usage:  ./butler_hw7_task1.c
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/21/2017 04:17:29 PM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Kyle Webb (), kylewebbear@weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>		/* Standard Library */
#define LEN 5
/* Function Prototypes */
void Copy_arr (const double ar1[], double ar2[], int i);
void Copy_ptr(const double *ar1, double *ar2, int i);
void Copy_ptrs ( double *ar2, double *start, double *end);
/* Main Program */
int main(int argc, char *argv[])
{
	double dest [LEN];
	const double source [LEN] = {1.1,2.2,3.3,4.4,5.5};
	double source1 [LEN] = {1.1,2.2,3.3,4.4,5.5}; // This is the source without the const for function 3
	int i=0;

	printf("The original array is : ");
	for (i = 0; i < LEN; i++)
	{
	printf("  %.1f",source[i]);
	}
	printf("\n");



	Copy_arr(source, dest, i);
	Copy_ptr(source,dest,i);
	Copy_ptrs(dest,source1,&source1[4]);
	return 0;
}


/* Function Defenitions */

void Copy_arr (const double ar1[], double ar2[], int i)
{
	for (int i =0 ; i < LEN ; i++)
	{
		ar2[i] = ar1[i];
	}
	printf("The copied array using values is : ");
	for (i = 0; i < LEN; i++)
	{
	printf("  %.1f",ar2[i]);

	}
	printf("\n");
	return;
}

void Copy_ptr(const double *ar1, double *ar2, int i)
{
	for (int i =0 ; i < LEN ; i++)
{
	*ar2 = *ar1;
	ar2 ++;
	ar1 ++;
}
	printf("The copied array using pointers is : ");
	for (i = 1; i <=  LEN; i++)
	{
	printf(" %.1f",ar2[i]);
	}
	printf("\n");
	return;
}

void Copy_ptrs( double *ar2, double *start, double *end)
{
	double *arr2 = ar2;

	while (start != end )
	{
		*ar2 = *start;
		ar2 ++;
		start++;
		
	}
	if (start == end)
	{
		*ar2 = *start;
	}
	ar2 = arr2; 
	printf("The copied array using end and starting address is : ");
	for (int i = 0; i < LEN; i++)

	{
	printf(" %.1f",ar2[i]);
	}
	printf("\n");
	return;
}


	
