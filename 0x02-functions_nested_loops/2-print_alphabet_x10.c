#include "main.h"
/**
 *print_alphabet_x10 - Entry point
 *Description: function that prints 10 times the alphabet
 *Return: always 0
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 1; j < 10; j++)
	{
		for (i = 97; i <= 122; i++)
			_putchar (i);
		_putchar ('\n');
	}
}


