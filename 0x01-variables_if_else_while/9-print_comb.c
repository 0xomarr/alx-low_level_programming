#include <stdio.h>

/**
 * main - Entry point
 * Description: It prints the numbers from 0-9
 *		following by comma
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
