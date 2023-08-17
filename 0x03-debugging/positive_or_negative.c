#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 *	positive_or_negative - checks sign of param and print
 *	@n: integer
 *	Return: void
 *
 */
void positive_or_negative(int n)
{
	printf("%d is ", n);
	if (n > 0)
		printf("positive\n");
	else if (n < 0)
		printf("negative\n");
	else
		printf("zero\n");
}



