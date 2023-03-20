#include <stdio.h>

/**
 * main - Entry point
 * Description: It prints the numbers from 0-9 and the alphabet
 *		in lowercase a-f
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 48; n <= 102; n++)
	{
		putchar(n);
		if (n == 57)
			n += 39;
	}
	putchar('\n');
	return (0);
}

