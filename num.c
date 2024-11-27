#include "main.h"

/**
 * dec_printer - prints the number in base  10.
 *
 * @va: the variadic arg list.
 * @buffer_storge: the buffer to string.
 * @index: the current index position.
 * @len: the count of printed bytes
 *
 * Return: the always one.
*/
int dec_printer(va_list va, char *buffer_storge, int *index, int *len)
{
	int n = va_arg(va, int);

	if (n < 0)
	{
		copy(buffer_storge, '-', index, len);
		n *= -1;
	}
	print_number(buffer_storge, (unsigned long)n, index, len);

	return (1);
}

/**
 * int_printer - prints the number in.
 *
 * @va: the variadic arg list.
 * @buffer_storge: the buffer to store chars.
 * @index: the current index position.
 * @len: the count of printed bytes
 *
 * Return: the always one.
*/
int int_printer(va_list va, char *buffer_storge, int *index, int *len)
{
	int n = va_arg(va, int);

	if (n < 0)
	{
		copy(buffer_storge, '-', index, len);
		n *= -1;
	}
	print_number(buffer_storge, (unsigned long)n, index, len);

	return (1);
}

/**
 * print_number - prints the number in hex_capit.
 *
 * @arr: the pointer to a string.
 * @n: the number to be changed.
 * @index: the current index position.
 * @len: is the length.
 *
 * Return: the amount of char copied.
*/
void print_number(char *arr, unsigned long n, int *index, int *len)
{
	if (n < 10)
		copy(arr, (char)(n + '0'), index, len);
	else
	{
		print_number(arr, n / 10, index, len);
		copy(arr, (char)((n % 10) + '0'), index, len);
	}
}

