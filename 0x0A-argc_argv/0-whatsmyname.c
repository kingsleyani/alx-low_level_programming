#include <stdlib.h>
#include <stdio.h>

/**
 * main - print the name of the executable file
 * @argc: size of *argv (argument count)
 * @argv: array of strings that contains the command line arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

		return (0);
}
