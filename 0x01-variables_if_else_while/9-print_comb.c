#include<stdio.h>

/**
 * main - main  is a program that prints all possible combinations of numbers
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		if (i == 9)
			putchar(i + '0');
		else
			putchar(i + '0');
			putchar(',');
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
