#include "main.h"

/**
 * rot_13_printer - copies the rot_13 edr
 * @va: the va list
 * @buffer_storge: variable to store ter
 * @index: the index of arr.
 * @len: the amount of printed chars.
 *
 * Return: the number of chars copied
*/
int rot_13_printer(va_list va, char *buffer_storge, int *index, int *len)
{
	int i = -1;
	char *str = NULL;

	str = va_arg(va, char *);
	if (str == NULL)
		return (-1);

	while (str[++i])
	{
		copy(buffer_storge, rot(str[i]), index, len);
	}

	return (1);
}

/**
 * rot - converts a char to rot_13
 * @c: the char to convert.
 *
 * Return: the converted char.
*/
char rot(char c)
{
	if (isalpha(c))
	{
		c += 13;
		if (isalpha(c))
			return (c);
		return (c - 26);
	}
	return (c);
}

