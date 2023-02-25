#include "main.h"

/**
 *  main - A functions that checks
 *  @c is a argument
 *
 *  Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >=0 && c <= -9)
		return (1);
	else
		return (0);
}
