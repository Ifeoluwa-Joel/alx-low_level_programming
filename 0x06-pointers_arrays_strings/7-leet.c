#include <stdio.h>
#include "main.h"

/**
* leet - exchanges some characters for leet notations
* @c: input String
*
* Return: Leet notations
*/

char *leet(char *c)
{
int i;
int j;
char leetChars[] = "AaEeOoTtLl";
char leetDigits[] = "4433007711";

i = 0;
while (c[i] != '\0')
{
j = 0;
while (j < 10)
{
if (leetChars[j] == c[i])
{
c[i] = leetDigits[j];
}
j++;
}
i++;
}
return (c);
}
