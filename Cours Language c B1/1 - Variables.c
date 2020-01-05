
#include <stdio.h>
#include <stdlib.h>

void Variables()
{
    // CREATION DE VARIABLES

    int a = 2 ;
    int a123 = 2;
    int a_123_S ;
    int numeroDeTelephone ;
    int numero_de_telephone ;


    /*
    int 123a = 2;
    int יאטכןװ = 2;
    int la fiesta = 2;
    int a,a.a = 2;
    */

    char c; //char -127 -> 127
    int i; //int -32767 -> 32767
    long l; //long -2 147 483 647 -> 2 147 483 647
    float f; //float -1 x1037 -> 1 x1037
    double d; //double -1 x1037 -> 1 x1037

    unsigned int b; // O -> 65 535

    const int NOMBRE_DETUDIANTS =5;

    // AFFECTATION DE VARIABLES

    int aff;
    aff = 2;
    int aff2 = 2;
    int aff3 = aff2;
    int aff4 = aff2;

    //AFFICHAGE DES VARIABLES

    printf("Coucou");
    printf("Coucou\n");

    int nbEtudiants = 30;
    printf("Il y a %d etudiants " , nbEtudiants );
    long nbEtudiants2 = 30;
    printf("Il y a %ld etudiants" , nbEtudiants2 );
    float nbEtudiants3 = 30;
    printf("Il y a %f etudiants" , nbEtudiants3 );
    double nbEtudiants4 = 30;
    printf("Il y a %f etudiants" , nbEtudiants4 );

    printf("%d %d %f %d",nbEtudiants,nbEtudiants,nbEtudiants3,nbEtudiants);

    //DEMANDE DE VARIABLES
    int age = 0;
    scanf("%d",&age);
    printf("%d",age);

    //EXERCICES

    /*Exercice 1
    Créer deux variables de type int et trouver deux moyens d'intervertir les valeurs des deux variables
    */
    /*Exercice 2
    Créer un programme qui demande le nombre d'étudiants dans la salle et qui affiche la valeur donnée
    */
}
