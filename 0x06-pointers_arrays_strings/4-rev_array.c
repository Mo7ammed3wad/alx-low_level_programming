#include "main.h"

/**
 * reverse -  function that reverses the content of an array of integers.
 */

void reverse_array(int *a, int n)
{
	int d;
	int m;

	d = 0;
	while (d < n)
	{
		n--;
		m = a[d];
		a[d] = a[n];
		a[n] = m;
		d++;
	}
}
