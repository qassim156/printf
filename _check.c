#include "main.h"

/**
 * check_1024 - checks if the bytes exceeds 1024.
 * @arr: is the array that is to be printed.
 * @index: the total occupied bytes of arr.
 *
 * Return: an integer to the caller.
*/
int check_1024(char *arr, int *index)
{
	int printed_chars = 0;

	if (*index == 1024)
	{
		printed_chars = write_std(arr, index);
		*index = 0;
		return (printed_chars);
	}

	return (0);
}

/**
 * write_std - writes a string to the std output.
 *
 * @str: is the string to be printed to the stdout.
 * @index: the amount of bytes to be written.
 *
 * Return: the amount of bytes written.
*/
int write_std(char *str, int *index)
{
	return (write(1, str, *index));
}


/**
 * copy - copies an individual character.
 *
 * @arr: it stores a memory loction of an array.
 * @c: it is the char to be copied.
 * @index: it is a pointer to an index.
 * @len: the current bytes that are printed to std out.
 *
 * Return: void.
*/
void copy(char *arr, char c, int *index, int *len)
{
	*len += check_1024(arr, index);
	arr[(*index)++] = c;
}
