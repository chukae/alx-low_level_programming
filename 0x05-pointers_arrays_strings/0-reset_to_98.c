#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - changes the value in pointer
 *
 * Return: Always void.
 */
void reset_to_98(int *n)
{
	int *ptr = n;
	*ptr = 98;
}

