#include <stdio.h>

/**
 * main - prints alphabet in lower case then upper case
 *
 * Decription: using the scrip prints alphabeth in lower case then upper case
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
