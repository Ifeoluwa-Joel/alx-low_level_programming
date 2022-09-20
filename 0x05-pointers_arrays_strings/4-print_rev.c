#include <stdio.h>
#include "main.h"

/**
* print_rev - prints string  from back to front
* @s: parameter for function
*
*Return: Void
*/

void print_rev(char *s)
{
int count = 0;
while (count >= 0)
{
if (s[count] == '\0')
break;
count++;
}
for (count--; count >= 0; count--)
putchar(s[count]);
putchar('\n');
}
