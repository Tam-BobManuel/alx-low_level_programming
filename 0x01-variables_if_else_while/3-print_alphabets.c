#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,
 * and also in upper case
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{

	char js;

	for (js = 'a'; js <= 'z'; js++)
		putchar(js);
	for (js = 'A'; js <= 'Z'; js++)
		putchar(js);
	putchar('\n');
	return (0);

}

