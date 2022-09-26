#include <stdio.h>
#include "main.h"

/**
* _strchr - locates a particular character in a string
* @s: the String
* @c: the character to locate
*
* Return: A pointer to the character. If not found, return a pointer to NULL
*/


char *_strchr(char *s, char c)
{

int i = 0;
while (*(s + i) != '\0')
{

if (*(s + i) == c)

return (s + i);
i++;
}

if (c == '\0')

return (s + i);

return (NULL);

}
