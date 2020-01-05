#include <stdio.h>
#include <stdlib.h>

int Plus1(int i)
{
    int result = i + 1;
    return result;
}

void Coucou()
{
    printf("coucou");
}

int Addition(int a, int b)
{
    int result = a + b;
    return result;
}

int Addition2(int a, int b)
{
    return a+b;
}

int AdditionPlus1(int a, int b)
{
    int addition = Addition(a,b);
    int result = Plus1(addition);
    return result;
}

//EXERCICES

/*
Exercice 1
Faire une fonction qui prend en entrée 2 entiers et qui retourne le maximum des deux.
Faire une fonction qui prend en entrée 2 entiers et qui retourne le minimum des deux.
Faire une fonction qui prend en entrée 2 entiers et qui retourne la somme des deux.
Faire une fonction qui prend en entrée 2 entiers et qui retourne la différence entre des deux.

Exercice 2
En utilisant les fonctions de l'exercice 1, créer une fonction qui demande deux chiffres entiers à l'utilisateur et qui ensuite lui propose de choisir l'action
parmis les 4 de l'éxercice 1 qu'il va faire sur ces deux chiffres.

Exercice 3
Créer une fonction Power qui prend en entrée deux chiffres a et b et qui retourne a exposant b (a^b)

Exercice 4
Créer une fonction qui prend en entrée un chiffre et qui calcule la somme des retours de la fonction Power pour les chiffres allant de 0 au chiffre entré.
(Si on rentre 5, le résultat sera : 1^1 + 2^2 + 3^3 + 4^4 + 5^5)


Exercices Part 2
Exercice 1
Écrire une fonction distance ayant comme paramètres 4 doubles
xa,ya et xb,yb qui représentent les coordonnées de deux points A et B
et qui renvoie la distance AB.

Exercice 2
Faire une fonction qui prend en entrée un chiffre et qui renvoie
1 si le chiffre est un nombre premier et 0 si il ne l'est pas.

Exercice 3
Grace à la réponse de l'exercice 2, écrire une fonction qui prend en
entrée un chiffre A et qui affiche les A chiffres entiers premiers
éxistants.

Exercice 4
Sans utiliser de boucles while/for et sans passer par Math.h
faire une fonction qui prend en paramètres deux chiffre a et b
et qui renvoie a^b.
*/


