#include "main.h"
#include <stdlib.h>

/**
*alloc_grid - make grip
*@width: input width
*@height: input height
*Return: pointer to 2 dim, array
*/
int **alloc_grid(int width, int height)
{
int **mee;
int t, d;

if (width <= 0 || height <= 0)

return (NULL);

mee = malloc(sizeof(int *) * height);

if (mee == NULL)
return (NULL);

for (t = 0; t < height; t++)
{
mee[t] = malloc(sizeof(int) * width);

if (mee[t] == NULL)
{
for (; t >= 0; t--)
free(mee[t]);

free(mee);
return (NULL);
}
}

for (t = 0; t < height; t++)
{
for (d = 0; d < width; d++)
mee[t][d] = 0;
}

return (mee);
}
