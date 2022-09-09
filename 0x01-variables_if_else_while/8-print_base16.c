#include <stdio.h>

/**
* main - prints all numbers of the hex numbering system in lower caps
* Return: Always 0 (SUCCESS)
*/

int main(void)
{
int i, j;

for (i = 48; i < 58; i++)
{
putchar(i);
}

for (j = 97; j < 103; j++)
{
putchar(j);
}

putchar('\n');
return (0);
}
