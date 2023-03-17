#include<stdio.h>

/**
 * main - main function that prints all the numbers of base 16 in lowercase
 *
 * Return: 0
 */

int main(void)
{
	int i;
	char l;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (l = 'a' ; l <= 'f' ; l++)
		putchar(l);
	putchar('\n');
	return (0);
}
