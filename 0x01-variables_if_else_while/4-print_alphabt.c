#include<stdio.h>
/**
 * main - main block
 * Description: use 'putchar' to print all letters but letter 'q' and 'e'.
 * Return: Always 0 (success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
