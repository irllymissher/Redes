#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define MAX_SIZE 256

int main(int argc, char *argv[])
{
	int    i,
           numero;
	char   *file_name,
            buffer[MAX_SIZE];
	FILE   *f;
    if (argc < 3)
    {
        printf("error papi\n");
        exit(-1);
    }
    file_name = argv[1];
	numero = atoi(argv[2]);
	if (numero  <= 0)
    {
        printf("Numero < 0, escriba otro. \n");
        exit(999);
    }
	f = fopen(file_name, "w");
	if(f == NULL)
    {
		printf("No puedo abrir el fichero %s\n", argv[1]);
        exit(999);
	}
	printf("> ");
    while(fgets(buffer, MAX_SIZE-1, stdin) != NULL)
    {

        for(i = 0; i <= numero; i++)
        {
            fprintf(f, "%d: %s", i+1, buffer);
        }
        printf("> ");
    }
	fclose(f);
	return 0;
}
