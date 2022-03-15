#include "main.h"

/**
 * main - entry point
 *
 * Description: Prints _putchar with _putchar
 *
 * Return: always 0
 */

int main(void)
{
	char h[] = "abcdefghi";
	int s = sizeof(h);
	int i;

	for (i = 0; i < s; i++)
	{
		_putchar(h[i]);

	}

	_putchar('\n');
	return (0);
}
