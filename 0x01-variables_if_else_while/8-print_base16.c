#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{

	int n;

	char c;

	for (n = 0; n <= 9; n++)
		putchar("%d");
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar("\n");
	return (0);

}

