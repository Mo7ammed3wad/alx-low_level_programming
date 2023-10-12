#include "variadic_functions.h"

/**
* print_char.
*/

void print_char(va_list arg)
{
char ltr;
ltr = va_arg(arg, int);
printf("%c", ltr);
}

void print_int(va_list arg)
{
int n;
n = va_arg(arg, int);
printf("%d", n);
}

void print_float(va_list arg)
{
float num;
num = va_arg(arg, double);
printf("%f", num);
}

void print_string(va_list arg)
{
char *str;
str = va_arg(arg, char *);
if (str == NULL)
{
printf("(nil)");
return;
}
printf("%s", str);
}

void print_all(const char * const format, ...)
{
va_list args;
int v = 0, k = 0;
char *separator = "";
printer_t funcs[] = {
{"c", print_char},
{"i", print_int},
{"f", print_float},
{"s", print_string}
};
va_start(args, format);
while (format && (*(format + v)))
{
k = 0;
while (k < 4 && (*(format + v) != *(funcs[k].symbol)))
k++;
if (k < 4)
{
printf("%s", separator);
funcs[k].print(args);
separator = ", ";
}
v++;
}
printf("\n");
va_end(args);
}
