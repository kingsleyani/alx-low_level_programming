#include<stdio.h>
/**
 * main: entry block
 * Description : program to print alphabets lower and upper case.
 * Return : always 0 (success)
 */
int main(void)
{
	char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			putchar("%c ", c);
		}
		putchar("\n")


		for (c = 'A'; c <= 'Z'; c++)
		{
			putchar("%c ", c);
		}
		return (0);
