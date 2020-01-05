#include <stdio.h>
#include <stdlib.h>

void Boucles()
{

    //LES BOUCLES WHILE
    int a;

    while( a == 0)
    {
        scanf("%d",&a);
        printf("%d",a);
    }





    int compteur=0;
    while (compteur<10)
    {
        compteur++;
        printf("%d",compteur);
    }





    //LES BOUCLES DO WHILE
    compteur = 5;
    do
    {
        printf("Coucou");
        compteur++;
    }
    while(compteur<10); // Attention au point virgule






    //LA BOUCLE FOR
    for (int i=0;i<10;i++)
    {
        printf("%d",i);
    }

    //EXERCICES
    /*
    Exercice 1
    Via une boucle while puis une boucle for afficher tout les chiffres entiers de 100 à 1
    Exercice 2
    Ecrire un programme qui calcule la somme des 10 premiers chiffres entiers
    Exercice 3
    Faire un programme qui demande à l'utilisateur dix notes et affiche la moyenne des notes.
    Exercice 4
    Ecrire un programme qui demande un chiffre à l'utilisateur et qui affiche sa table de multiplication.
    Exercice 5
    Ecrire un programme qui essaye de faire deviner un chiffre à l'utilisateur. Tant que l'utilisateur n'a pas rentré le bon chiffre le programme lui redemande un chiffre.
    Si le chiffre que l'utilisateur rentre est plus grand que le chiffre demandé le programme affiche : "Le chiffre recherché est plus petit".
    Si le chiffre que l'utilisateur rentre est plus petit que le chiffre demandé le programme affiche : "Le chiffre recherché est plus grand".
    Le programme affiche "Victoire" si le chiffre rentré par l'utilisateur est le bon.
    Exercice 6
    Ecrire un programme qui demande un nombre et calcule la factorielle de ce nombre.
    Exercice Bonus
    Ecrire un programme qui calcule la 20eme valeur de la suite de fibonacci.
    Ecrire un programme détectant les nombres de Armstrong compris entre 0 et 999.
    */
}
