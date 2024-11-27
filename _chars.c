#include "main.h"

/**
 * percent_printer - prints the % sign in.
 *
 * @va: the va_list macre.
 * @buffer_storge: stores the buffer.
 * @index: the current position of an index
 * @len: is the length printed.
 *
 * Return: one.
*/
int percent_printer(va_list va __attribute__((unused)),
			char *buffer_storge, int *index, int *len)
{
	copy(buffer_storge, '%', index, len);
	return (1);
}

/**
 * string_printer - copies a string to the buffer.
 *
 * @va: is the varidic argument list.
 * @buffer_storge: stores the buffer to print.
 * @index: the current copied char.
 * @len: the length of the chars.
 *
 * Return: the amount of char copied.
*/
int string_printer(va_list va, char *buffer_storge, int *index, int *len)
{
	char *str = NULL;
	int i = -1;

	str = va_arg(va, char *);
	if (str == NULL)
		str = "(null)";
	while (str[++i])
	{
		copy(buffer_storge, str[i], index, len);
	}

	return (1);
}


/**
 * char_printer - copies a string to the buffer.
 *
 * @va: is the varidic argument list.
 * @buffer_storge: stores the buffer to print.
 * @index: the current copied char.
 * @len: the length printed
 *
 * Return: the amount of char copied.
*/
int char_printer(va_list va, char *buffer_storge, int *index, int *len)
{
	int c = va_arg(va, int);

	copy(buffer_storge, (char)c, index, len);

	return (1);
}
