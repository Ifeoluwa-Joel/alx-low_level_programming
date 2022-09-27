#include <stdio.h>
#include "main.h"

/**
* _strpbrk - locates the first any bytes from @accept in @s
* @s: string
* @accept: string to compare with s
*
* Return: A pointer to the byte in @s that matches @accept
* or NULL if none exists
*/

char *_strpbrk(char *s, char *accept)
{
int i, j;

for (i = 0; *(s + i) != '\0'; i++)
{
for (j = 0; *(accept + j) != '\0'; j++)
{
if (*(s + i) == *(accept + j))
{
return (s + i);
}

}

}

return (NULL);
}
