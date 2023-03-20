#include <stdio.h>

/**
 * main - Entry point
 * Description: It prints the numbers from 0-9
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
