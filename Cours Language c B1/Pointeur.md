Créer une fonction qui prend en paramètre un pointeur et qui change sa valeur pour que la valeur de ce pointeur de soit jamais inférieure à zéro.
```
void Abs(int *x)
{
    if (*x < 0)
    {
        *x = *x * -1;
    }
}
```
Créer une fonction qui prend en paramètre un pointeur et un chiffre et qui ajoute à la valeur du pointeur le chiffre donné.
```
void Add(int *p, int s)
{
    *p += s;
}
```
Créer une fonction qui échange les valeurs de deux Variables.
```
void Switch(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}
```
Soit 3 variables : Seconde, Minute, Heure. Créer une fonction qui en fonction d'un certain nombre de secondes remplira les deux varibales minutes et heures.
```
void Time(int s, int *min, int *h)
{
    *min = s/60;
    *h = s/3600;
}
```
