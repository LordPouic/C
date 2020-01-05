
int Mini ( int x, int y)
{
    if (x<y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int Maxi ( int x, int y)
{
    if (x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int Somme (int a, int b)
{
    return a+b;
}

int Difference (int a, int b)
{
    return a-b;
}

void Choix()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);

    printf("Choisissez entre 1,2,3 et 4:");
    int c;
    scanf("%d",&c);
    int result;
    if(c == 1)
        result = Mini(a,b);
    else if (c == 2)
        result = Maxi(a,b);
    else if (c == 3)
        result = Somme(a,b);
    else if (c == 4)
        result = Difference(a,b);

    printf ("%d", result);
}
