#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{

	char tb;

	for (tb = 'z'; tb >= 'a'; tb--)
		putchar(tb);
	putchar("\n");
	return (0);

}
