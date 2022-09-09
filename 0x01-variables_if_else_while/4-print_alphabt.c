#include <stdio.h>

/**
* main - prints English alphabets except 'q' and 'e' in lower caps
* Return: 0 Always (SUCCESS)
*/

int main(void)
{
char alphabet[24] = "abcdfghijklmnoprstuvwxyz";
int i;

for (i = 0; i < 24; i++)
{
putchar(alphabet[i]);
}
putchar('\n');

return (0);
}
