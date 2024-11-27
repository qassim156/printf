#include "main.h"

/**
 * bin_printer - prints the number in any base.
 *
 * @va: the variadic arg list.
 * @buffer_storge: the buffer to store chars.
 * @index: the current index position.
 * @len: the count of printed bytes
 *
 * Return: the always one.
*/
int bin_printer(va_list va, char *buffer_storge, int *index, int *len)
{
	unsigned long int n = va_arg(va, unsigned long int);

	print_number_bin(buffer_storge, (unsigned long)n, index, len);

	return (1);
}

/**
 * print_number_bin - prints the number in hex_capi.
 *
 * @arr: the pointer to a string.
 * @n: the number to be changed.
 * @index: the current index position.
 * @len: is the length.
 *
 * Return: the amount of char copied.
*/
void print_number_bin(char *arr, unsigned long n, int *index, int *len)
{
	if (n < 2)
		copy(arr, (char)(n + '0'), index, len);
	else
	{
		print_number_bin(arr, n / 2, index, len);
		copy(arr, (char)((n % 2) + '0'), index, len);
	}
}

