// Similar a cat. Version con llamadas al sistema

#include <unistd.h>
#define TAMANO_BUFFER 512

int main(int argc, const char **argv)
{
	int n;
	char buf[TAMANO_BUFFER];
	if(argc != 1){
		write(2, "Error: no se admiten argumentos\n", TAMANO_BUFFER);
		return 1;
	}
	while ((n= read(0, buf, TAMANO_BUFFER)) > 0) write(1, buf, n);
	return 0;
}

