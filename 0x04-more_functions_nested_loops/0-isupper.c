#include "main.h"
#include <stdio.h>

/**
* _isupper: decides if a character is upper or lowercase
* Return: 0 if character is lower case or 1 if character is uppercase
*/


int _isupper(int c)
{
char i;
int isUpper = 0;

for (i = 'A'; i <= 'Z'; i++)
{
if (i == c)
{
isUpper = 1;
}
return (isUpper);
}
  
}
