#include "main.h"

/**
 * print_chessboard.
*/

void print_chessboard(char (*a)[8])
{
	int m, n;

	for (m = 0; m < 8; m++)
	{
		for (n = 0; n < 8; n++)
		{
			_putchar(*(*(m + a) + n));
		}
	_putchar('\n');
	}
}
