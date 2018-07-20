#include <unistd.h>
#include <fcntl.h> //Necesario para 0_RDWR y 0_CREAT
#define TAMANO_BUFFER 512

int main(int argc, char **argv) 
{
	int n;
	char buf[TAMANO_BUFFER];
	int fd;
	if (argc != 2)
	{
		write(2, "Error: Numero de argumentos incorrecto.\n", TAMANO_BUFFER);
		return 1;
	}
	fd = open(argv[1], O_RDWR|O_CREAT, S_IRUSR|S_IWUSR|S_IRGRP|S_IROTH);
	while (n=read(0, buf, TAMANO_BUFFER))
	{
		write(1, buf, n);
		write(fd, buf, n);
   
	}
	close(fd);
	return 0;
}
