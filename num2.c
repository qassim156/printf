#include "main.h"

/**
 * hex_printer - prints the number in base.
 *
 * @va: the variadic arg list.
 * @buffer_storge: the buffer.
 * @index: the current index position.
 * @len: the count of printed bytes
 *
 * Return: the always one.
*/
int hex_printer(va_list va, char *buffer_storge, int *index, int *len)
{
	unsigned long n = va_arg(va, unsigned long int);

	print_number_hex(buffer_storge, (unsigned long)n, index, len);

	return (1);
}

/**
 * print_number_hex - prints the number in hex_capit.
 *
 * @arr: the pointer to a string.
 * @n: the number to be changed.
 * @index: the current index position.
 * @len: is the length.
 *
 * Return: the amount of char copied.
*/
void print_number_hex(char *arr, unsigned long n, int *index, int *len)
{
	char str[] = "0123456789abcdef";

	if (n < 10)
		copy(arr, str[n], index, len);
	else
	{
		print_number_hex(arr, n / 16, index, len);
		copy(arr, str[n % 16], index, len);
	}
}

