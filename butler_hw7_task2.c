/*
 * =====================================================================================
 *
 *       Filename:  butler_hw7_task2.c
 *       	Usage:  ./butler_hw7_task2.c
 *    Description: task 2. this program lists 10 random numbers
 *    				and it prints the max and min values from the list
 *
 *        Version:  1.0
 *        Created:  03/21/2017 04:17:43 PM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Kyle Webb (), kylewebbear@weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>		/* Standard Library */
#include <time.h>		/* For CPU Time */

#define MAXNUM 10 //define a max number for list of intagers
/* Function Prototypes */
void MaxMin(int numvals, int vals[], int* min, int* max);

/* Main Program */
int main(int argc, char *argv[])
{
	int max, min, random[MAXNUM];
	MaxMin(MAXNUM, &min, &max, random); //calls the function
	
	return 0;
}

/* Function Defenitions */
void MaxMin(int numvals, int vals[], int* min, int* max)
{
	srand(time(NULL)); //sets your random seed
	
	printf("The list of numbers is:\n");
	for(int i = 0; i < numvals; i++)
	{
		//takes values between 10 and 99.
		vals[i] = 10+(int) (rand() % 90);
		printf("%d\n", vals[i]); //prints the list
	}
	for(int x = 1; x < numvals; x++)
	{
		if(*min > vals[x])
		{
			*min = vals[x];
		}
	}
	for(int y = 1; y < numvals; y++)
	{
		if(*max < vals[y])
		{
			*max = vals[y];
		}
	}
	printf("The Maximum value in the series is %d\n", *max);
	printf("The Minimum value in the series is %d\n", *min);
	
	return; //returns nothing
}
