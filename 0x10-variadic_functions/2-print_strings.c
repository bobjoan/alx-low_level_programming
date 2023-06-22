#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings, followed by a new line
 * @separator: seperates strings
 * @n: string to print
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int i = 0;

	va_list(args);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		const char *str = va_arg(args, const char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
