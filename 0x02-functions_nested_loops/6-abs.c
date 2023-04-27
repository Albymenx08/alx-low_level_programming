#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer
 * @i: variable name
 *Return: 1 for lower case 0 for the rest
 */
int _abs(int i)
{
	if (i >= 0)
		return (i);
	else
		return (i * -1);
	_putchar ('\n');
}


