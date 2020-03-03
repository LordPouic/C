#include <stdio.h>
#include <stdlib.h>

void Malloc()
{
    // connaitre la taille en mémoire
    printf("char : %d octets\n", sizeof(char));
    printf("int : %d octets\n", sizeof(int));
    printf("int[100] : %d octets\n", sizeof(int[100]));
    printf("Coordonnees : %d octets\n", sizeof(Coordonnees));

    int* m = malloc(sizeof(int)); //Réservation mémoire pour un int
    scanf("%d",m);
    printf("%d",*m);
    free(memoireAllouee); //Libération de la mémoire

    int taille = 10;
    int TableauDynamiqueMauvais[taille]; // -> interdit
        
    int *TableauDynamiqueBien = NULL;
    TableauDynamiqueBien = (int *) malloc(taille * sizeof(int));
    //le (int *) -> permet de caster le pointeur qui sans est de type (void *)
    
    return 0;
}

typedef struct Coordonnees Coordonnees;
struct Coordonnees
{
    int x;
    int y;
};
