#include <stdio.h>

/**
 * main - prints all single digit in base 10 starting from 0
 * using only putchar and w/o char variables
 *
 * Decription: using the script to print single digit
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
