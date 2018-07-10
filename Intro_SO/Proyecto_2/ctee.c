// Similar a cat. Version con funciones de biblioteca

#include <stdio.h>

int main(int argc, const char **argv)
{
	if (argc != 2)
	{
		fprintf (stderr, "Error: Debes introducir: %s File \n", argv[0]);
		return 1;
	}

	FILE *file;
	int c;
	file = fopen(argv[1], "w");

	while ((c=getchar()) != EOF)
	{
		putchar(c);
		putc(c, file);
	}
	fclose(file);
	return 0;
}

