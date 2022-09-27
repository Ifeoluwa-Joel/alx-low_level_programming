#include <stdio.h>
#include "main.h"

/**
* _strstr - finds @needle in @haystack
* @needle: the substring to look for
* @haystack: the string to look into
*
* Return: A pointer to the beginning substring. NULL if not found.
*/

char *_strstr(char *haystack, char *needle)
{
int i, j;

for (i = 0; haystack[i] > '\0'; i++)
{
for (j = i; haystack[j] > '\0' && needle[j - i] > '\0'; j++)
{
if (haystack[j] != needle[j - i])
{
break;
}
}
if (needle[j - i] == '\0')
{
return (haystack + i);
}
}
return (0);
}
