#include "main.h"

/**
*append_text_to_file - append text
*
*@filename: the filename
*
*@text_content: added content.
*
*Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
int td;
int nletters;
int rwr;

if (!filename)
return (-1);

td = open(filename, O_WRONLY | O_APPEND);

if (td == -1)
return (-1);
if (text_content)
{
for (nletters = 0; text_content[nletters]; nletters++)
;
rwr = write(td, text_content, nletters);

if (rwr == -1)
return (-1);

}
close(td);
return (1);
}
