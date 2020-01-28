
Faire une fonction qui prend en entrée 2 entiers et qui retourne le maximum des deux.
Faire une fonction qui prend en entrée 2 entiers et qui retourne le minimum des deux.
Faire une fonction qui prend en entrée 2 entiers et qui retourne la somme des deux.
Faire une fonction qui prend en entrée 2 entiers et qui retourne la différence entre des deux.

```
int Max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
```

```
int Min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
```

```
int Add(int a, int b)
{
    int c = a + b;
    return c;
}
```

```
int Diff(int a, int b)
{
    int c = a - b;
    return c;
}
```

En utilisant les fonctions de l'exercice 1, créer une fonction qui demande deux chiffres entiers à l'utilisateur et qui ensuite lui propose de choisir l'action
parmis les 4 de l'éxercice 1 ce qu'il va faire sur ces deux chiffres.

```
int Menu(int a, int b)
{
    printf("1: Max\n2: Min\n3: Add\n4: Diff");
    int choix ;
    scanf("%d",&choix);
    if(choix == 1)
    {
        return Max(a,b);
    }
    else if (choix == 2)
    {
        return Min(a,b);
    }
    else if (choix == 3)
    {
        return Add(a,b);
    }
    else if (choix == 4)
    {
        return Diff(a,b);
    }
}
```
