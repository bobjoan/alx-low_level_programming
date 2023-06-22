#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: format to print anything
 * Return: 0
 */

void print_all(const char * const format, ...)
{
	va_list(args);
	char *s;
	int i = 0, n = 0;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
				{
					printf("%s", "(nil)");
				}
				else
				{
					printf("%s", s);
				}
				break;
		}
		n++;
		i++;
		if (format[i])
		{
			printf(", ");
		}
	}
	va_end(args);
	printf("\n");
}
