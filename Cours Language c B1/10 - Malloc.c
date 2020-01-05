#include <stdio.h>
#include <stdlib.h>

void Malloc()
{
    // connaitre la taille en mémoire
    printf("char : %d octets\n", sizeof(char));
    printf("int : %d octets\n", sizeof(int));
    printf("int[100] : %d octets\n", sizeof(int[100]));

}
