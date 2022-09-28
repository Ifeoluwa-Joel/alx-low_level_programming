#include <stdio.h>
#include "main.h"

/**
* factorial - returns the factorial of any given number
* @n: given integer to calculate
*
* Return: factorial of n OR 1 if n == 0 OR -1 if n is < 0
*/

int factorial(int n)
{
if (n == 0)
{
return (1);
}

else if (n < 0)
{
return (-1);
}

else
{
return (n * factorial(n - 1));
}
}
