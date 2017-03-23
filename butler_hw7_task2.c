/*
 * =====================================================================================
 *
 *       Filename:  butler_hw7_task2.c
 *       	Usage:  ./butler_hw7_task2.c
 *    Description: task 2. 
 *
 *        Version:  1.0
 *        Created:  03/21/2017 04:17:43 PM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Kyle Webb (), kylewebbear@weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>		/* Standard Library */
#include <time.h>		/* to gain cpu time */

#define MAXNUM 10 //define a max number for list of intagers

/* Function Prototypes */
void MaxMin(int numvals, int vals[], int* min, int* max);

/* Main Program */
int main(int argc, char *argv[])
{
	int max, min, random[MAXNUM];
	MaxMin(MAXNUM, &min, &max, random);
	return 0;
}
/* Function Defenitions */
void MaxMin(int numvals, int vals[], int* min, int* max)
{
	srand(time(NULL)); //sets your random seed
//	*max = vals[0];
//	*min = vals[0];

	printf("The list of numbers is:\n");
	for(int i = 0; i < numvals; i++)
	{
		//takes values between 10 and 99.
		vals[i] = 10+(int) (rand() % 90);
		printf("%d\n", vals[i]); //prints the list
	}

	for(int j = 1; j < numvals; j++)
	{
		if(*min > vals[j])
		{
			*min = vals[j];
		}
	}
	for(int i = 1; i < numvals; i++)
	{
		if(*max < vals[i])
		{
			*max = vals[i];
		}
	}
	printf("The Maximum value in the series is %d\n", *max);
	printf("The Minimum value in the series is %d\n", *min);
	return;

}


