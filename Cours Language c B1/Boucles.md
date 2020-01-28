Via une boucle while puis une boucle for afficher tout les chiffres entiers de 100 à 1


```
int i =100;
while (i>=0)
{
    printf("%d",i);
    i--;
}
```

```
for (int i=100;i>=0;i--)
{
    printf("%d",i);
}
```

Ecrire un programme qui calcule la somme des 10 premiers chiffres entiers


```
int s =0;
for(int i=0;i<10;i++)
{
    s += i;
}
printf("%d",s);
```
Faire un programme qui demande à l'utilisateur dix notes et affiche la moyenne des notes.

```
float Snotes;
for(int i=0;i<10;i++)
{
    float n;
    scanf("%f",&n);
    Snotes += n;
}

float moyenne = Snotes/10;
printf("%f",moyenne);
```

Ecrire un programme qui demande un chiffre à l'utilisateur et qui affiche sa table de multiplication.

```
int x;
scanf("%d",&x);

for(int i=0;i<10;i++)
{
    int r = i * x;
    printf("%d x %d = %d \n",x,i,r);
}
```

Ecrire un programme qui essaye de faire deviner un chiffre à l'utilisateur. Tant que l'utilisateur n'a pas rentré le bon chiffre le programme lui redemande un chiffre.
    Si le chiffre que l'utilisateur rentre est plus grand que le chiffre demandé le programme affiche : "Le chiffre recherché est plus petit".
    Si le chiffre que l'utilisateur rentre est plus petit que le chiffre demandé le programme affiche : "Le chiffre recherché est plus grand".
    Le programme affiche "Victoire" si le chiffre rentré par l'utilisateur est le bon.
    
```
int ValeurCachee = 54;
int proposition = 0;
while (ValeurCachee != proposition)
{
    scanf("%d",&proposition);

    if (proposition> ValeurCachee)
    {
        printf("Trop haut \n");
    }
    else if (proposition<ValeurCachee)
    {
        printf("Trop Bas \n");
    }
}
printf("Victoire");

```
