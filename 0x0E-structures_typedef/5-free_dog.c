#include <stdlib.h>
#include "dog.h"

/**
*free_dog - memory allocated for a struct dog
*@d: struct
*/
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
