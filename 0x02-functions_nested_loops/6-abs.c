#include "main.h"

/**
 * _abs - Comutes the absolute value of an integer
 * @d: The number to be computed
 * Return: Absolute value of number or zero
 */

int _abs(int d)
{

	if (d < 0)
	{
		int abs_val;

		abs_val = d * -1;
		return (abs_val);
	}
	return (d);
}
