#include "main.h"

/**
 * _isdigit - checks for a digit from 0 through 9
 * @c: is the taken value
 *
 * Return: 1 if c is a digit and 0 if otherwise
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
