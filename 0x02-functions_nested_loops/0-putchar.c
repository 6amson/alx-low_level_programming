#include "main.h"

/**
 * main - prints _putchar, followed by a new line.
 *
 * Description - a script that does as stated above.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char Z[] = "_putchar\n";
	int t = 0;

	while (t < 9)
	{
		_putchar(Z[t]);
		t++;
	}

	return (0);
}
