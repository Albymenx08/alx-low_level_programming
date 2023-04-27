#include "main.h"
/**
 *print_last_digit - function that prints the last digit of a number
 * @n: Variable that stores Integer
 *Return: 1 for s a letter, lowercase or uppercase 0 for the rest
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar (-l + 48);
		return (-l);
	}
	else
	{
		_putchar (l + 48);
		return (l);
	}
	_putchar ('\n');
}


