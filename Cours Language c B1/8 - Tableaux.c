void Tableaux()
{
    //Création d'un tableau de 4 cases
    int tableau[4];

    int tailleTableau2 = 4;
    int tableau2[tailleTableau2];

    int i;
    //Initialisation d'un tableau
    tableau[0] = 10;
    tableau[1] = 23;
    tableau[2] = 505;
    tableau[3] = 8;
    //Attention tableau[4] n'éxiste pas

    int tableau3[4] = {1, 5, 147, 0};
    int tableau4[4] = {10, 23}; // Valeurs: 10, 23, 0, 0



    for (i = 0 ; i < 4 ; i++)
    {
        tableau[i] = 0;
    }




    //affichage du tableau

    printf("%d", tableau);    //Affiche l'adresse du tableau
    printf("%d", tableau[0]); //Affiche la valeur de la première case du tableau
    printf("%d", tableau[1]); //Affiche la valeur de la deuxième case du tableau

    for (i=0;i<4;i++)
    {
        printf("%d \n",tableau[i]);
    }

    printf("%d", *tableau); //Affiche la valeur de la première case du tableau
    printf("%d", *(tableau+1)); //Affiche la valeur de la deuxième case du tableau
}



void QueDes1(int *t, int taille)
{
    for(int i=0;i<taille;i++)
    {
        t[i] = 1;
    }

}


/*
Exercice 1
En une ligne créer un tableau de 50 cases initialisées par des zéros dans chaque case.
Exercice 2
Créer un tableau de 100 cases où chaque case est initailisée par son indice dans le Tableaux
Exercice 3
Écrire un programme qui demande à l’utilisateur de saisir 10 entiers stockés dans un tableau
ainsi qu’un entier V. Le programme doit rechercher si V se trouve dans le tableau et afficher « V se trouve dans le tableau » ou « V ne se trouve pas dans le tableau ».
Exercice 4
Créer une fonction qui prends en entrée un tableau et qui affiche la somme de toutes les valeurs comprises dans ce Tableaux
Exercice 4.1
Créez une fonction qui calcule et renvoie la moyenne des valeurs d'un tableau.
Exercice 5
Créer une fonction qui prend en entrée 2 tableaux et qui copie les valeurs du premier tableau dans le deuxième.
Exercice 6
Écrire un programme qui saisit 2 tableaux de 10 entiers A et B. C est un tableau de 20 entiers.
Le programme doit mettre dans C la fusion des tableaux A et B. On copiera dans les 10 premières cases de C le tableau A, dans les dix dernières le tableau B.
*/
