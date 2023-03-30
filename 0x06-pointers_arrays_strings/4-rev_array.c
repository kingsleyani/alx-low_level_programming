#include "main.h"
/**
 * reverse_array - Reverse content of an array
 * @a: Pointer to an integer array int[]
 * @n: Integer value, number of elements
 * * Return: Integer value
 */
void reverse_array(int *a, int n)
{
	int i, temp, size;

	size = (n / 2) + (n % 2);
	for (i = 0; i < size; i++)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
		n--;
	}
}
