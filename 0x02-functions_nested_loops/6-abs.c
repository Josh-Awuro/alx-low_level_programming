#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _abs - prints the absolute value of an integer value
 * @j: is an integer data type that holds either
 * negative or positive numbers
 * Return: the absolute value of the integer value
 */
int _abs(int j)
{
	if (j >= 0)
	{
		return (j);
	}
	return (-j);
}
