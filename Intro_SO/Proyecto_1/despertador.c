#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main (int argc, const char *argv [])
{
	if (argc<3)
	{
 		printf("Error: Número de argumentos incorrecto. Introduce: tiempo arg1 arg2...\n");
		exit(1);
	}

	int j = atoi(argv[1]);
	if (j<0) j=0;
	sleep(j);
	for (int i=2; i<argc; i++) printf("%s " , argv[i]);
	printf("\n");
	exit(0);
}
