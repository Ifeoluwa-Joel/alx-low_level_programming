#include <stdio.h>
#include "main.h"

/**
* free_grid - frees the memory assigned by alloc_grid
* @grid: int 2 dimenaional array
* @height: height of the 2-dimension array
*
* Return: Void (Nothing)
*/

void free_grid(int **grid, int height)
{
if (grid != NULL && height != 0)
{
for (; height >= 0; height--)
free(grid[height]);
free(grid);
}
}
