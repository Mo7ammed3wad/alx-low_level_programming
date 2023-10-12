#include "variadic_functions.h"

/**
* print_strings.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{

va_list li;
unsigned int m;
char *str;

va_start(li, n);

for (m = 0; m < n; m++)
{
str = va_arg(li, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);

if (m != (n - 1) && separator != NULL)
printf("%s", separator);
}

printf("\n");
va_end(li);
}
