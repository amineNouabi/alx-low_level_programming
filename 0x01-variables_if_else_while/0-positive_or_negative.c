#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 *	main - generates a random number and checks its sign
 *
 *	Return: Always 0
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d is ", n);
	if (n > 0)
		printf("positive\n");
	else if (n < 0)
		printf("negative\n");
	else
		printf("zero\n");
	return (0);
}



