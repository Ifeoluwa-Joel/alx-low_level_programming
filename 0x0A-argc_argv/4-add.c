#include <ctype.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>


/**
* main - this function adds 2 positive argv contents
* @argc:  argument counter
* @argv: string arry containing all arguments
*
* Return: sum or 0 if argc <= 1
*/

int main(int argc, char *argv[])
{
int i, j, add = 0;

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
add = add + atoi(argv[i]);
}
printf("%d\n", add);
return (0);
}
