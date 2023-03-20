#include <stdio.h>

/**
 * main - Entry point
 * Description: It prints the alphabet in lowercase
 *		in reverse order
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 122; n >= 97; n--)
		putchar(n);
	putchar('\n');
	return (0);
}

