#include <stdio.h>
#include "main.h"

/**
* _strlen - returns the length of an array of Characters
*@s: input parameter of type char
*Return: length of the string excluding /0
*
*/

int _strlen(char *s)
{
int count = 0;

while (*(s + count) != '\0')
count++;
return (count);
}
