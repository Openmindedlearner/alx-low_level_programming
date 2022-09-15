#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lower case
 *
 * Return: Always 0 (Sucess)
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
	_putchar('\n');
}
