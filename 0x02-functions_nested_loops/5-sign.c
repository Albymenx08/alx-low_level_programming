#include "main.h"
/**
 *print_sign - function that checks for alphabetic  character
 * @n: ASCII Character
 *Return: 1 for s a letter, lowercase or uppercase 0 for the rest
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar (43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar (45);
		return (-1);
	}
	else
	{
		_putchar (48);
		return (0);
	}
	_putchar ('\n');
}


