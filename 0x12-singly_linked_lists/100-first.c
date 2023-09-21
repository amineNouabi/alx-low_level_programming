#include <stdio.h>

void premain(void) __attribute__ ((constructor));

/**
 * premain - function that gets executed before main.
 *
 * Return: void
 */
void premain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
