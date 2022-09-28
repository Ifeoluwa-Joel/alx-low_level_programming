#include <stdio.h>
#include "main.h"

/**
* _puts_recursion - prints a string while calling itself
* @s: string to print
*
* Return: Void (NOTHING)
*/

void _puts_recursion(char *s)
{
if (*s != '\0')
{
putchar(*s);
_puts_recursion(s + 1);
}

else
{
putchar('\n');
}
}
