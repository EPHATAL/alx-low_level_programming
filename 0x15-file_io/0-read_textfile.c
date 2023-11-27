#include "main.h"

/**
*read_textfile - a function
*
*@filename: the file name
*
*@letters: Letters
*
*Return: the actual number of letters or 0 if fails
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
int td;
ssize_t_read, _write;

char *buffer;

if (!filename)
{
return (0);
}
/*openfile*/
td = open(filename, O_RDONLY);

if (td == -1)
return (0);

/*buffer*/

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);

/*read*/

_read = read(td, buffer, letters);
if (_read == -1)
{
free(buffer);
close(td);
return (0);
}

/*write*/
_write = write(STDOUT_FILENO, buffer, _read);
if (_write == -1)
{
free(buffer);
close(td);
return (0);
}
close(td);
return (_read);
}
