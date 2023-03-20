#include <stdio.h>

/**
 * main - Entry point
 * Description: a program that prints the alphabet in lowercase
 *		        except e and q
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 97; n <= 122; n++)
		if (n != 101 && n != 113)
			putchar(n);
	putchar('\n');
	return (0);
}

