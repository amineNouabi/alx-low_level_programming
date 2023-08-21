/**
 * swap - swap values of two pointers
 * @a: pointer to int
 * @b: pointer to int
 * Return: void
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
