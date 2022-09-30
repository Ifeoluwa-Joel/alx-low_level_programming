#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
* main - prints all arguments including the 1st one
* @argc: Arguments counter
* @argv: Array of strings to collect arguments
*
* Return: All arguments; each on a new line
*/

int main(int argc, char *argv[])
{
int i;

{
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
}
return (0);
}
