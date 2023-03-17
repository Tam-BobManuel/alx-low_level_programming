#include <stdio.h>
/**
 * main - Prints numbers between 00 to 89.
 *Seperates them with a comma and space
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j

	for (i = 0; i < 10; i++)
	for (j = i + 1; j < 10; j++)
		putchar(i + '0');
		putchar(j + '0');
	if (i == 8 && j == 9)
		putchar('\n');
	else
		putchar(',');
		putchar(' ');

	return (0);
}

