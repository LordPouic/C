typedef struct Hero Hero;
struct Hero{
    char name[20];
    int pv;
    int force;
};

typedef struct Point Point;
struct Point{
    float x;
    float y;
};

void IntialisateurDeHero( Hero* h)
{
    (*h).force = 10;
    (*h).pv = 5;

    strcpy((*h).name, "Bob");
}


int main()
{
    Hero h;
    h.force = 10;
    scanf("%s",&h.name);
    h.pv = 5;
    
    Hero h2;
    IntialisateurDeHero(&h2);
}
