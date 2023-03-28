#include <stdio.h>
#include "main.h"

/**
 * swap_int - Function swaps the values of two integers
 *
 * @a: pointer to integer value
 * @b: pointer to integer value
 *
 * Return: Always void.
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;

}

