#include <stdio.h>

/**
 * main - prints all single digit in base 10 starting from 0
 *
 * Decription: using the script to print single digit
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf("\n");

	return (0);
}
