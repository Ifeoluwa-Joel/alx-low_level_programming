#include <stdio.h>

/**
* main - prints all single digit numbers of base 10 using PUTCHAR alone
* Return: Always 0 (SUCCESS)
*/

int main(void)
{
int i;

for (i = 48; i < 58; i++)
{
putchar(i);
}

putchar('\n');

return (0);

}
