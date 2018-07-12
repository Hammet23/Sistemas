// Similar a cat. Version con llamadas al sistema

#include <unistd.h>
#define TAMANO_BUFFER 512

int main(int argc, const char **argv)
{
	int n;
	char buf[TAMANO_BUFFER];
	while ((n= read(0, buf, TAMANO_BUFFER)) > 0) write(1, buf, n);
	return 0;
}

