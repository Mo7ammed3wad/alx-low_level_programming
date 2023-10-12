#include "variadic_functions.h"
#include <stdarg.h>

/**
*sum_them_all.
*/

int sum_them_all(const unsigned int n, ...)
{
va_list li;
int s = 0;
unsigned int v;

va_start(li, n);

if (n != 0)
{
for (v = 0; v < n; v++)
s += va_arg(li, int);
}

va_end(li);
return (s);
}
