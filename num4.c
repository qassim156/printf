#include "main.h"

/**
 * unsgd_printer - prints the number in any base.
 *
 * @va: the variadic arg list.
 * @buffer_storge: the buffer to store chars.
 * @index: the current index position.
 * @len: the count of printed bytes
 *
 * Return: the always one.
*/
int unsgd_printer(va_list va, char *buffer_storge, int *index, int *len)
{
	unsigned long n = va_arg(va, unsigned long int);

	print_number(buffer_storge, (unsigned long)n, index, len);

	return (1);
}

/**
 * oct_printer - prints the number in any base.
 *
 * @va: the variadic arg list.
 * @buffer_storge: the buffer to store chars.
 * @index: the current index position.
 * @len: the count of printed bytes
 *
 * Return: the always one.
*/
int oct_printer(va_list va, char *buffer_storge, int *index, int *len)
{
	unsigned long n = va_arg(va, unsigned long int);

	print_number_oct(buffer_storge, (unsigned long)n, index, len);

	return (1);
}

/**
 * print_number_oct - prints the number in hex_capi.
 *
 * @arr: the pointer to a string.
 * @n: the number to be changed.
 * @index: the current index position.
 * @len: is the length.
 *
 * Return: the amount of char copied.
*/
void print_number_oct(char *arr, unsigned long n, int *index, int *len)
{
	if (n < 8)
		copy(arr, (char)(n + '0'), index, len);
	else
	{
		print_number_oct(arr, n / 8, index, len);
		copy(arr, (char)((n % 8) + '0'), index, len);
	}
}

