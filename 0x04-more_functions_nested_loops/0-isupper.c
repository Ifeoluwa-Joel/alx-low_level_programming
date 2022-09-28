#include "main.h"
#include <stdio.h>

/**
* main - decides if a character is upper or lowercase
* @c: input character
* Return: 0 if character is lower case or 1 if character is uppercase
*/

int main(void)
{
char c;

c = 'A';
printf("%c: %d\n", c, _isupper(c));
c = 'a';
printf("%c: %d\n", c, _isupper(c));
return (0);
}
