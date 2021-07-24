#include "variadic_functions.h"
/**
 * print_char - variable
 * @c: variable
 *
 * Return: 0
 */
void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}
/**
 * print_int - variable
 * @i: variable
 *
 * Return: 0
 */
void print_int(va_list i)
{
	printf("%d", va_arg(i, int));
}
/**
 * print_float - funcion
 * @f: variable
 *
 * Return: 0
 */
void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}
/**
 * print_string - funcion
 * @s: variable
 *
 * Return: 0
 */
void print_string(va_list s)
{
	char *out = va_arg(s, char *);

	if (out == NULL)
	{
		printf("(nil)");
	}
	else
	{
	printf("%s", out);
	}
}

/**
 * print_all - prints anything
 * @format: variable
 *
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	int j = 0;
	char *separador = "";

	impresion valores[] = {

		{"c", print_char},
		{"i", print_int},
		{"s", print_string},
		{"f", print_float},
		{NULL, NULL}
	};

	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		while (valores[j].t != NULL)
		{
			if (*(valores[j].t) == format[i])
			{
				printf("%s", separador);
				valores[j].f(ap);
				separador = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	va_end(ap);
}
