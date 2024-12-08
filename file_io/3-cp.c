#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "file_operations.h"

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

