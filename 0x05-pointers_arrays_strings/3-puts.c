#include <stdio.h>
#include "main.h"

/**
* _puts - prints out strings
* @str: a parameter of the function
*
* Return: Void
*/

void _puts(char *str)
{

int count = 0;

while (count >= 0)
{
if (str[count] == '\0')
{
putchar('\n');
break;
}
putchar(str[count]);
count++;
}
}
