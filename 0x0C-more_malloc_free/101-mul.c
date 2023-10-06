#include "main.h"
/**
 * isNumber - checks if a string is a number
 * @s: string to check
 * Return: 1 if number, 0 if not
 */
int isNumber(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		if (s[i] < '0' || s[i] > '9')
			return (0);
	return (1);
}

/**
 * print_result - prints the result of the multiplication
 * @result: array of integers
 * @len: length of result
 * Return: void
 */
void print_result(int *result, int len)
{
	int i;

	/* remove leading zeros */
	for (i = 0; i < len && result[i] == 0; i++)
		;

	/* if all digits are 0, print 0 */
