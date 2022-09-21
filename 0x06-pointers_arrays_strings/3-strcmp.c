#include <stdio.h>
#include "main.h"

/**
* _strcmp - compares the length of two strings
* @s1: first string
* @s2: second string
*
* Return: integer that shows if s1 is <, = or > s2
*/

int _strcmp(char *s1, char *s2)
{

int i = 0, j = 0;

while (j == 0)
{
if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
break;
j = *(s1 + i) - *(s2 + i);
i++;
}

return (j);

}
