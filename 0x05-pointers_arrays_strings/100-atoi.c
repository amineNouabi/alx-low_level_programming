/**
 * _atoi - Parses string to integer
 * @s: String
 * Return: Integer
 */
int _atoi(char *s)
{
	int number = 0;
	int sign = 1;

	while (*s)
	{
		if (*s == '-' && !number)
			sign *= -1;
		if (*s >= '0' && *s <= '9')
			number = number * 10 + (*s - '0');
		else
			if (number)
				break;
		s++;
	}
	return (number * sign);
}
