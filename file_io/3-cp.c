#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/* Vérification de l'état d'une opération de fichier */
void check_io_stat(int fd, const char *filename, char mode)
{
	if (fd == -1)
	{
		if (mode == 'r')
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		else if (mode == 'w')
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", filename);
		exit(mode == 'r' ? 98 : 99);
	}
}

/* Ouverture du fichier source en lecture */
int open_source_file(const char *filename)
{
	int src;

	src = open(filename, O_RDONLY);
	check_io_stat(src, filename, 'r');
	return (src);
}

/* Ouverture du fichier destination en écriture (avec troncature) */
int open_dest_file(const char *filename)
{
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH;
	int dest;

	dest = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
	check_io_stat(dest, filename, 'w');
	return (dest);
}

/* Copie du contenu du fichier source vers le fichier destination */
void copy_file(int src, int dest)
{
	char buffer[BUFFER_SIZE];
	ssize_t n_read, n_write;

	while ((n_read = read(src, buffer, BUFFER_SIZE)) > 0)
	{
		n_write = write(dest, buffer, n_read);
		if (n_write != n_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file descriptor %d\n", dest);
			exit(99);
		}
	}
	if (n_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file descriptor %d\n", src);
		exit(98);
	}
}

/* Fermeture d'un fichier */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

int main(int argc, char *argv[])
{
	int src, dest;

	/* Vérification du nombre d'arguments */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	/* Ouverture du fichier source et destination */
	src = open_source_file(argv[1]);
	dest = open_dest_file(argv[2]);

	/* Copie du contenu du fichier source vers le fichier destination */
	copy_file(src, dest);

	/* Fermeture des fichiers */
	close_file(src);
	close_file(dest);

	return (0);
}
