/**
 * swap_int - swap values of two integer pointers
 * @a: pointer to int
 * @b: pointer to int
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
