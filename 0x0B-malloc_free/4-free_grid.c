#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
*free_grid - frees array 2d
*@grid: grid 2d
*@height: input height of grip
*Description: memory of grid free
*Return: nothing
*
*/
void free_grid(int **grid, int height)
{

int t;
for (t = 0;  t < height; t++)
{
free(grid[t]);
}
free(grid);
}
