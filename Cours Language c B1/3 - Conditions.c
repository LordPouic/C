#include <stdio.h>
#include <stdlib.h>

void Conditions()
{

    //LES CONDITIONS DE BASE
    int a =0;

    if ( a==0 )
    {
        printf("a est egal a zero");
        printf("a est egal a zero");
        printf("a est egal a zero");
        printf("a est egal a zero");
        printf("a est egal a zero");

    }

    if (a>0)
    {
        printf("a est superieur a zero");
    }

    if (a>=0)
    {
        printf("a est superieur ou egal a zero");
    }

    if (a<0)
    {
        printf("a est inferieur a zero");
    }

    if (a<=0)
    {
        printf("a est inferieur ou egal a zero");
    }

    // LE ELSE

    if (a>0)
    {
        printf("a est superieur a zero");
    }
    else
    {
        printf("a n'est pas superieur a zero");
    }




    if (a>0)
    {
    }
    else if (a<0)
    {
    }
    else
    {
    }

    //MULTIPLES CONDITIONS
    if (a>0 && a <10)
    {

    }

    if (a==0 || a ==1)
    {
    }

    if (!(a==0))
    {
    }

    //LES BOOLEANS
    int dimanche = 1;
    if (dimanche)
    {
        printf("On est dimanche");
    }
    else
        printf("On est peut etre lundi");





    //EXERCICES
    /*
    Exercice 1
    Faire un programme qui demande l'age d'une personne et qui affiche si cette personne est majeure ou non.
    Exercice 2
    Faire un programme qui demande un chiffre et qui affiche si ce chiffre est pair ou impair.
    Exercice 3
    Faire un programme qui demande deux valeurs et qui affiche la plus petite des deux
    Exercice 4
    Même exercice que le 3 mais cette fois le programme demande 3 valeurs
    Exercice 5
    Faire un programme qui demande une note et qui affiche la mention assignée à cette note
    Exercice 6
    Ecrire un programme qui detecte si une année est bisextile
    Si l’annee A n’est pas divisible par 4, alors elle n’est pas bissextile Si A est divisible par 4, l’annee est bissextile sauf
    si A est divisible par 100 et pas par 400.
    */
}
