#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int index, bts;
int (*address)(int, char **) = main;
unsigned char opc;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
bts = atoi(argv[1]);
if (bts < 0)
{
printf("Error\n");
exit(2);
}
for (index = 0; index <  bts; index++)
{
opc = *(unsigned char *)address;
printf("%.2x", opc);
if (index == bts - 1)
continue;
printf(" ");
address++;
}
printf("\n");
return (0);
}
