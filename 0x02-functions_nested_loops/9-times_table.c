#include "main.h"

/**
 * times_table - prints the 9 timetables
 *
 * Example Table
 * 0, 0, 0, 0, ..
 * 0, 1, 2, 3, ..
 *
 */

void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; ++num)
	{
		_putchar(48);
		for (mult = 1; mult <= 9; ++mult)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;
		/*
		 * put space if product is single number
		 * place the first digit f its two numbers
		 */
		if (prod <= 9)
			_putchar(' ');
		else
		_putchar((prod / 10) + 48);
		/*get the second digit*/
		}
		_putchar('\n');
	}
}