Ecrire un programme qui demande une valeur et qui affiche le carré de cette valeur

```
int c;
scanf("%d",&c);
c = c * c;
printf("%d",c);
```

Ecrire un programme demandant 2 valeurs a et b pour ensuite afficher en console : "a + b = resultat"

```
int a;
int b;
scanf("%d",&a);
scanf("%d",&b);
int c = a + b;
printf("%d + %d = %d",a,b,c);
```

Ecrire un programme qui demande 4 valeurs et qui affiche la moyenne des 4

```
int n1,n2,n3,n4;
scanf("%d",&n1);
scanf("%d",&n2);
scanf("%d",&n3);
scanf("%d",&n4);

float m = (n1+n2+n3+n4)/4.0;

printf("%f",m);
```

Ecrire un programme qui demande le rayon d'un cercle et qui affiche de perimetre de ce cercle

```
int rayon;
scanf("%d",&rayon);

float p = 2 * rayon * M_PI;

printf("%f",p);
```

Écrire un programme qui demande  de taper la largeur et la longueur d'un champ
et qui en affiche le périmètre et la surface.

```
float L,l;
scanf("%f",&L);
scanf("%f",&l);
float p = (l*2) + (L*2);
float s = L*l;
printf("surface : %f Perimetre : %f",s,p);
```
