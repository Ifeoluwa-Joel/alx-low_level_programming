#include <stdio.h>
#include "main.h"

/**
* check_int - checks num if suitable for square root
* @square: square integer
* @x: integer
* Return: 1
*/

int check_int(int square, int x)
{
if (x * x == square)
{
return (x);
}

else if (x > square / x)
{
return (check_int(square, x - 1));
}

else if (x < square / x)
{
return (check_int(square, x + 1));
}

else
{
return (-1);
}

}




/**
* _sqrt_recursion - returns the square root of @n
* @n:Integer parameter
*
* Return: Square Root of Integer @n
*/

int _sqrt_recursion(int n)
{
int m;

m = 1;

if (n < 0)
return (-1);
else if (n == 1)
return (1);
else
return (check_int(n, m));

}
