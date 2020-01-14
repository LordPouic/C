
Faire un programme qui demande l'age d'une personne et qui affiche si cette personne est majeure ou non.

```
int age;
scanf("%d",&age);
if (age>=18)
{
    printf("Vous êtes majeur");
}
else
{
    printf("Vous êtes mineur");
}
```

Faire un programme qui demande un chiffre et qui affiche si ce chiffre est pair ou impair.

```
int C;
scanf("%d",&C);
if (C%2 == 0)
{
    printf("%d est pair",C);
}
else
{
    printf("%d est impair",C);
}
```

Faire un programme qui demande deux valeurs et qui affiche la plus petite des deux

```
int a,b;
scanf("%d",&a);
scanf("%d",&b);
if(a > b)
{
    printf("%d",a);
}
else
{
    printf("%d",b);
}
```

Même exercice que le 3 mais cette fois le programme demande 3 valeurs

```
int a,b,c;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if (a < b && a < c)
{
    print ("%d",a);
}
else if ( b < c)
{
    printf("%d",b);
}
else
{
    printf("%d",c);
}
```
