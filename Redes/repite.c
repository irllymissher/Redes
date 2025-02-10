#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int numero;

    if (argc < 2)
    {
        printf("Argumentos minimos ._. \n");
        exit(-1);
    }
    numero = atoi(argv[2]);
    for(int i = 0; i < numero; i++)
    {
        printf("%s\n", argv[3]);
    }
    return 0;
}
