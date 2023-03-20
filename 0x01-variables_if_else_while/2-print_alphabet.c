#include <stdio.h>

/**
 * main - Entry point
 * Description:program that prints the alphabet in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
	char n;

	for (n = 97; n <= 122; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
