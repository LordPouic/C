
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
