#include <stdlib.h>
#include "main.h"

/**
* alloc_grid - points a pointer to a 2-dimension array of integers
* @width: rows of the 2-dimensional array
* @height: column of the 2 dimensional array
*
* Return: a pointer to the 2 dimensional array
*/

int **alloc_grid(int width, int height)
{
int **gridout;
int i, j;

if (width < 1 || height < 1)
return (NULL);

gridout = malloc(height * sizeof(int *));
if (gridout == NULL)
{
free(gridout);
return (NULL);
}

for (i = 0; i < height; i++)
{
gridout[i] = malloc(width * sizeof(int));
if (gridout[i] == NULL)
{
for (i--; i >= 0; i--)
free(gridout[i]);
free(gridout);
return (NULL);
}
}

for (i = 0; i < height; i++)
for (j = 0; j < width; j++)
gridout[i][j] = 0;

return (gridout);
}
