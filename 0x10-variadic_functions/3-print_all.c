#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - function prints anything
 * @format: list of types arguments passed
 *
 * Return: Nothing
 *
 */
void print_all(const char * const format, ...)
{
	int counter = 0;
	char *ptr;
	va_list ap;

	va_start(ap, format);
	if (format)
	{
		while (format[counter] != '\0')
		{
			switch (format[counter])
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
					ptr = va_arg(ap, char*);
					if (ptr == NULL)
						ptr = "(nil)";
					printf("%s", ptr);
					break;
				default:
					counter++;
					continue;
			}
			while (format[counter + 1] != '\0')
			{
				printf(", ");
				break;
			}
			counter++;
		}
	}
	va_end(ap);
	printf("\n");
}
