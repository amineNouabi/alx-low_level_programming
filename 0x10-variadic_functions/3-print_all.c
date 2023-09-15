#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0, j;
	char *str;

	va_start(ap, format);
	while (format && format[i])
	{
		switch (format[i++])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str)
					printf("%s", str);
				else
					printf("(nil)");
				break;
			default:
				continue;
		}
		j = i;
		while (format[j])
			if (format[j] == 'c' || format[j] == 'i' || format[j] == 'f' ||
					format[j] == 's' || !++j)
				break;
		if (format[j])
			printf(", ");
	}
	printf("\n");
	va_end(ap);
}
