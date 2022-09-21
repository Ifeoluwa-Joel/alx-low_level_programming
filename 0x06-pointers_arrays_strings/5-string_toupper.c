#include <stdio.h>
#include "main.h"

/**
* string_toupper - converts a string to uppercase
* @c: character pointer
*
* Return: Upper case of char *c
*/

char *string_toupper(char *c)
{
int count = 0;

while (*(c + count) != '\0')
{
if ((*(c + count) >= 97) && (*(c + count) <= 122))
*(c + count) = *(c + count) - 32;
count++;
}

return (c);
}
