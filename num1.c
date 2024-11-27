#include "main.h"

/**
 * HEX_printer - prints the number in base.
 *
 * @va: the variadic arg list.
 * @buffer_storge: the buffer chars.
 * @index: the current index position.
 * @len: the count of printed bytes
 *
 * Return: the always one.
*/
int HEX_printer(va_list va, char *buffer_storge, int *index, int *len)
{
	unsigned long n = va_arg(va, unsigned long int);

	print_number_HEX(buffer_storge, (unsigned long)n, index, len);

	return (1);
}

/**
 * print_number_HEX - prints a string.
 *
 * @arr: the pointer to a string.
 * @n: the number to be changed.
 * @index: the current index position.
 * @len: is the length.
 *
 * Return: the amount of char copied.
*/
void print_number_HEX(char *arr, unsigned long n, int *index, int *len)
{
	char str[] = "0123456789ABCDEF";

	if (n < 16)
		copy(arr, str[n], index, len);
	else
	{
		print_number_HEX(arr, n / 16, index, len);
		copy(arr, str[n % 16], index, len);
	}
}

