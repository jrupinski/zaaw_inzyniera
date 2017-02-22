#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc!=3)
    {
        fprintf(stderr, "usage: ./dodawanie a b\n");
        return 1;
    }

    int a = atoi(argv[1]),
        b = atoi(argv[2]);

    printf("suma = %d\n", a+b );
    return 0;
}
