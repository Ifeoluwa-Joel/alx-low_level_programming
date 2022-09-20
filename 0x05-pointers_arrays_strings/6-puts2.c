#include <stdio.h>
#include "main.h"

/**
* puts2 - function that prints one char and skip one char in a string
* @str: input parameter
* Return: Void
*/

void puts2(char *str)
{
int count = 0;

while (count >= 0)
{
if (str[count] == '\0')
{
putchar('\n');
break;
}
if (count % 2 == 0)
putchar(str[count]);
count++;
}
}
