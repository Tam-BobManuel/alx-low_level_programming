#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line,
 * did it with a for loop
 * Return: Always 0 (Success)
 */
int main(void)
{

	char tamDev;

	for (tamDev = 'a'; tamDev <= 'z'; tamDev++)
	{
		putchar(tamDev);
	}
	purchar('\n');
	return (0);

}

