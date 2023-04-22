#include <stdio.h>
/**
 *main - Entry point
 *Description : "prints the alphabet in lowercase, and then in uppercase"
 *Return: always 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
