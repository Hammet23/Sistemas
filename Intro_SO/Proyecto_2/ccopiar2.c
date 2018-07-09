// Similar a cat. Version con funciones de biblioteca

#include <stdio.h>

int main(int argc, const char *argv[])
{
	if (argc!=1)
	{
        	fprintf (stderr, "Error: Debes introducir: %s \n", argv[0]);
        	return 1;
        }

	int c;
	while ((c=getchar()) != EOF) putchar(c);
        return 0;
}



