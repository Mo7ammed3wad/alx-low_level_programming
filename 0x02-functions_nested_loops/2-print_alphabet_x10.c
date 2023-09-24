#include "main.h"

/**
 * print_alphabet_x10
 */

void print_alphabet_x10(void)
{
int o = 0;
while (o < 10)
{
char x = 'a';
while (x <= 'z')
{
_putchar(x);
x++;
}
_putchar('\n');
o++;
}
}
