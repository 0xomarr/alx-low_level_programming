#include <stdio.h>

/**
 * main - Entry point
 * Description: a program that prints the alphabet in lowercase and uppercase
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 97; n <= 122; n++)
		putchar(n);
	for (n = 65; n <= 90; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
