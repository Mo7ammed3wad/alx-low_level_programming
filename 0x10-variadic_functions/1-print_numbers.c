#include "variadic_functions.h"

/**
*print_numbers.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list li;
unsigned int x;

va_start(li, n);

for (x = 0; x < n; x++)
{


printf("%d", va_arg(li, int));

if (x != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(li);
}
