#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#define BUFFER_SIZE 1024
/**
 * open_file - Opens a file.
 * @filename: Name of the file to be opened.
 * @flags: Flags used for opening the file.
 * @mode: Mode used if the file is created.
 *
 * Return: The file descriptor of the opened file.
 */
int open_file(const char *filename, int flags, mode_t mode)
{
int fd = open(filename, flags, mode);
if (fd == -1)
{
if (flags == O_RDONLY)
dprintf(2, "Error: Can't read from file %s\n", filename);
else
dprintf(2, "Error: Can't write to %s\n", filename);
exit(98);
}
return (fd);
}
/**
 * close_file - Closes a file descriptor.
 * @fd: The file descriptor to be closed.
 *
 * Return: Nothing.
 */
void close_file(int fd)
{
if (close(fd) == -1)
{
dprintf(2, "Error: Can't close fd %d\n", fd);
exit(100);
}
}
/**
 * main - copies the content of a file to another file.
 * @argc: Number of arguments passed.
 * @argv: Array of arguments passed.
 *
 * Return: 0 on success.
 */
int main(int argc, char **argv)
{
int fd_from, fd_to, bytes_read, bytes_written;
char buffer[BUFFER_SIZE];
if (argc != 3)
{
dprintf(2, "Usage: cp file_from file_to\n");
exit(97);
}
fd_from = open_file(argv[1], O_RDONLY, 0);
fd_to = open_file(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written != bytes_read)
{
dprintf(2, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}
if (bytes_read == -1)
{
dprintf(2, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
close_file(fd_from);
close_file(fd_to);
return (0);
}

