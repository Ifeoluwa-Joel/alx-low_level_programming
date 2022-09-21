#include <stdio.h>
#include "main.h"

/**
* reverse_array - reverses the content of an array of integers
* @a: array identifier
* @n: max length of array
*
* Return: Void
*/

void reverse_array(int *a, int n)
{
int i = 0, j;
int temp;

for (i = 0; i < n - 1; i++)
{
for (j = i + 1; j > 0; j--)
{
temp = *(a + j);
*(a + j) = *(a + (j - 1));
*(a + (j - 1)) = temp;
}
}

}
