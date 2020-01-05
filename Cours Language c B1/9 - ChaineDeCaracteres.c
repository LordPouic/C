void ChaineDeCaracteres()
{
    //https://fr.wikibooks.org/wiki/Les_ASCII_de_0_%C3%A0_127/La_table_ASCII
    char lettre = 'A';
    printf("%c",lettre); // affiche Z
    printf("%d",lettre); // affiche 65

    //Création d'un Mot
    char chaine[6];

    chaine[0] = 'S';
    chaine[1] = 'a';
    chaine[2] = 'l';
    chaine[3] = 'u';
    chaine[4] = 't';
    chaine[5] = '\0';

    char chaine2[] = "Salut";

    //Affichage d'une chaine de caractères
    printf("%s", chaine);

    //Demander du texte à l'utilisateur
    char Text[100];
    scanf("%s", Text);
}

/*
Exercice 1
Via le tableau ASCII Créer un tableau contenant toutes les lettres de l'alphabet.
Exercice 2
Créer une fonction qui prend en entrée une chaine de caractères et lui ajoute un \n à la fin.
Exercice 3
Créer une fonction qui supprime les espaces d'une chaine de caractères
*/
