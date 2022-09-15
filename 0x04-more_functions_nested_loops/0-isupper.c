#include "main.h"
#include <stdio.h>

/**
* main - check the code.
*
* Return: Always 0.
*/


int _isupper(int c)
{
if (c > 64 && c <= 90)
return (1);

else if (c > 96 && c <= 122)
return (0);
}

int main(void)
{
char c;

c = 'A';
printf("%c: %d\n", c, _isupper(c));
c = 'a';
printf("%c: %d\n", c, _isupper(c));
return (0);
}
