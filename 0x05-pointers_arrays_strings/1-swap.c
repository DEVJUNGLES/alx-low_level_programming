#include <stdio.h>
/**
 * swap_int - Swaps the value of two integers.
 * @a: the first integer to be swapped
 * @b: the second integer to be swapped.
 *
 * Return: nothing
 */

void swap_int(*a, int *b)
/* the function that sweeps the value of two integers
 */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
