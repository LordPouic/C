#include <stdio.h>
#include <stdlib.h>

void Pointeur()
{
    int coucou = 10;

    //Affichage de la valeur de Coucou
    printf("Il y a %d coucous", coucou);

    //Affichage de l'adresse mémoire de la case Coucou
    //(%p permet l'affichage d'un nombre en Hexadécimal)
    printf("L'adresse de coucou est %d", &coucou);

    //Création d'un pointeur
    int *Pointeur_Coucou = NULL;

    //Affectation du pointeur
    Pointeur_Coucou = &coucou;
    // Pointeur_Coucou est identique à *Coucou

    //Affichage du pointeur
    printf("L'adresse stockée dans le Pointeur_Coucou est %p", Pointeur_Coucou);
    printf("La valeur correspondant est %d", *Pointeur_Coucou);

    //ATTENTION AU PLACEMENT DE *
    //Les deux utilisations de * sont différentes
    int *a ;
    printf("%d",*a);

    //Exemple d'utilisation
    int val = 123;
    int unite = 0;
    int dizaine = 0;
    int centaine = 0;

    DecoupeUniteDizaineCentaine(val,&unite,&dizaine,&centaine);

}

void DecoupeUniteDizaineCentaine(int val, int *u, int *d, int *c)
{
    *c = val/100;
    *d = val/10;
    *u = val;
}

/* Exercice 1
Créer une fonction qui prend en paramètre un pointeur et qui change sa valeur pour que la valeur de ce pointeur de soit jamais inférieure à zéro.
Exercice 2
Créer une fonction qui prend en paramètre un pointeur et un chiffre et qui ajoute à la valeur du pointeur le chiffre donné.
Exercice 3
Créer une fonction qui échange les valeurs de deux Variables.
Exercice 4
Soit 3 variables : Seconde, Minute, Heure. Créer une fonction qui en fonction d'un certain nombre de secondes remplira les deux varibales minutes et heures.
Exercice 5
Ecrire une fonction qui prend une variable en paramètre et qui affiche son adresse mémoire.
Bonus :
Refaire l'éxercice 3 sans copie de valeurs mais en utilisant une copie d'adresse.
*/
