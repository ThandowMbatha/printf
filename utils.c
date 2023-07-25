#include "main.h"

/**
 * is_printable - it evaluates if  char is printable
 * @c: Char
 * Return: 1 if c is printable, 0 NULL
 */
int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}

/**
 * append_hexa_code - it appends ascci in hexadecimal code to buffer
 * @buffer: an array of chars
 * @i: index to start appending
 * @ascii_code: ascii code
 * Return: Always 3 (success)
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}

/**
 * is_digit - it checks if a char is a digit
 * @c: Char
 * Return: 1 if c is a digit, 0 if NULL
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
 * convert_size_number - Casts a number to a specified size
 * @num: the number to be casted
 * @size: a number indicating the type to be printed
 * Return: printed value of num
 */
long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
 * convert_size_unsgnd - it prints the number to the specified size
 * @num: the number to be printed
 * @size: the number indicating the type to be printed
 * Return: the printed value of numbers
 */
long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
