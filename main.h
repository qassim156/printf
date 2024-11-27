#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>

/**
 * struct Format_specifier - stores the format specifier for the printf func
 *
 * @specifiers: characters that will be used as format specifier
 * @fun_ptr: a pointer to specific function that will perform the task
 */
typedef struct Format_specifier
{
	char specifiers;
	int (*fun_ptr)(va_list, char *, int *, int *);
} Formats;

int _printf(const char *format, ...);
int char_printer(va_list va, char *, int *, int *);
int int_printer(va_list va, char *, int *, int *);
int dec_printer(va_list va, char *, int *, int *);
int string_printer(va_list va, char *, int *, int *);
int percent_printer(va_list va __attribute__((unused)), char *, int *, int *);
int get_function(char, char *, int *, va_list va, int *);
int write_std(char *, int *);
void copy(char *, char c, int *, int *);
int check_1024(char *, int *);
void print_number(char *, unsigned long n, int *, int *);
void print_number_oct(char *arr, unsigned long n, int *index, int *len);
int oct_printer(va_list va, char *buffer_storge, int *index, int *len);
void print_number_bin(char *arr, unsigned long n, int *index, int *len);
int bin_printer(va_list va, char *buffer_storge, int *index, int *len);
void print_number_hex(char *arr, unsigned long n, int *index, int *len);
int hex_printer(va_list va, char *buffer_storge, int *index, int *len);
void print_number_HEX(char *arr, unsigned long n, int *index, int *len);
int HEX_printer(va_list va, char *buffer_storge, int *index, int *len);
int unsgd_printer(va_list va, char *buffer_storge, int *index, int *len);
int rot_13_printer(va_list va, char *buffer_storge, int *index, int *len);
char rot(char c);
void rot_13(char *str, char *buffer_storge, int *index, int *len);
void rev_copy(char *str, char *buffer_storage, int *index, int *len);
int reverse_printer(va_list va, char *buffer_storge, int *index, int *len);

#endif
