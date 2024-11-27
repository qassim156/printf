#include "main.h"

/**
 * reverse_printer - copies the reverse.
 *
 * @va: the string literal.
 * @buffer_storge: the char arr to storer.
 * @index: the current arr location.
 * @len: the len of chr printed.
 *
 * Return: void.
*/
int reverse_printer(va_list va, char *buffer_storge, int *index, int *len)
{
	char *str = NULL;

	str = va_arg(va, char *);
	if (str == NULL)
		return (-1);
	rev_copy(str, buffer_storge, index, len);

	return (1);
}

/**
 * rev_copy - copies the reversed str.
 *
 * @str: the string literal.
 * @buffer_storage: the char arr to store buff.
 * @index: the current arr location.
 * @len: the len of chr printed.
 *
 * Return: void.
*/
void rev_copy(char *str, char *buffer_storage, int *index, int *len)
{
	if (*str)
	{
		rev_copy(str + 1, buffer_storage, index, len);
		copy(buffer_storage, *str, index, len);
	}
}

