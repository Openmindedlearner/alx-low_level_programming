#include "main.h"
#include <ctype.h>

/**
 * _isalpha - fucntion that checks for alphabetic character
 * @c: char type letter
 * Return: Always 0
 */

int _isalpha(int c)
{
	int i = isalpha(c);

	if (i > 0)
		return (1);
	else
		return (0);
}
