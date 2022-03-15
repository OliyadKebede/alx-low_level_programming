#include "main.h"

/**
 * main - entry point
 *
 * Description: Prints _putchar with _putchar
 *
 * Return: always 0
 */

int main()
{
	int i = 0;
	char c;
	char s[] = "_putchar\n";

	while (i < 9)
	{
		c = s[i];
		_putchar(c);
		i++;
	}
	_putchar('\n');
	return (0);
}
