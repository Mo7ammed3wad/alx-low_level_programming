#include "main.h"

unsigned int binary_to_uint(const char *b)
{
unsigned int d = 0;
int str_l = 0, base = 1;

if (!check_valid_string(b))
return (0);

while (b[str_l] != '\0')
str_l++;

while (str_l)
{
d += ((b[str_l - 1] - '0') * base);
base *= 2;
str_l--;
}
return (d);
}

int check_valid_string(const char *b)
{
if (b == NULL)
return (0);
while (*b)
{
if (*b != '1' && *b != '0')
return (0);
b++;
}
return (1);
}
