#include <stdio.h>
/**
 * main - prints all single digit of base 10,
 * starting from 0,
 * followed by a new line using putchar
 *  Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
		putchar(c + '0');
	putchar('\n');
	return (0);

}
