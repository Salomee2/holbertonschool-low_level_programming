#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
* _strlen - Returns the length of a string.
* @s: The string.
* Return: The length of the string.
*/
size_t _strlen(char *s)
{
size_t len = 0;
while (s && s[len] != '\0')
len++;
return (len);
}

/**
* create_file - Creates file with specific content and permissions
* @filename: Name of the file to create.
* @text_content: Content to write into the file.
* Return: 1 on success, -1 on failure.
*/
int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t bytes_written;
if (filename == NULL)
return (-1);
fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
if (fd == -1)
return (-1);
if (text_content != NULL)
{
bytes_written = write(fd, text_content, _strlen(text_content));
if (bytes_written == -1)
{
close(fd);
return (-1);
}
}
close(fd);
return (1);
}

