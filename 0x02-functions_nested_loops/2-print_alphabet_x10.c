#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - the alphabets 10 times
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char a, c;

	for (a = 1; a <= 10; a++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
