#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * usin two input paramters
 * @a: input parameter 1
 * @b: input paramter 2
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
