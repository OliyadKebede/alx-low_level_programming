#include "main.h"

/**
 * main - entry point
 *
 * Description: Prints SoftwareEngineering with _putchar
 *
 * Return: always 0
 */

int main(void)
{
	int i = 0;
	char c;
	char s[] = "SoftwareEngineering\n";

	while (i <= 9)
	{
		c = s[i];
		_putchar(c);
		i++;
	}
	return (0);
}
