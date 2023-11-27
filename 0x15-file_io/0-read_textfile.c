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
int t, length, d, res;
char *buffer;

if (filename == NULL)
return (0);

/*open*/
t = open(filename, O_RDONLY);

if (t == -1)
return (0);

buffer = malloc(sizeof(char) * letters);

if (buffer)
return (0);

read(t, buffer, letters);
buffer[letters] = '\0';

for (d = 0; buffer[d] != '\0'; d += 1)
length += 1;

res = close(t);
if (res != 0)
exit(-1);
res = write(STDOUT_FILENO, buffer, length);
if (res != length)
return (0);
free(buffer);

return (length);
}
