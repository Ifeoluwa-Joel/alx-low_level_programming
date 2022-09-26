#include "main.h"

/**
* _memset - fills in a constant character into specified bytes
* of a memory area
* @s: pointer to memory area
* @b: constant character to fill in
* @n: number of bytes to fill with @b
* Return: pointer back to @s
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)

s[i] = b;

return (s);

}
