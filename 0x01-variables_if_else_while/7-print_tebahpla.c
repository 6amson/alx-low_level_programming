#include <stdio.h>

/**
 * main - prints alphabeth in lower case from z to a
 *
 * Decription: using the scrip prints alphabeth in lower case
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
