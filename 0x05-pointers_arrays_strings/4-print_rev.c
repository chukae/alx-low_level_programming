#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - function that prints a string, in reverse, followed by a new line.
 *@s: string
 *
 * Return: Always void.
 */

void print_rev(char *s)
{
	int len;
	int idx;
	len = strlen(s);

	for (idx = len - 1; idx >= 0; idx--)
	{
		putchar(s[idx]);
	}

	putchar('\n');

}

