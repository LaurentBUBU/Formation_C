

 
long long puissance_de(int v, int p)
{
    
    if(p==0)
    {
        return 1;
    }else
    {
        return v * puissance_de(v,p-1);
    }

}

int addition(int a, int b)
{
    int res = a + b;
    return res;
}

///////////////////////////////////////////////////////////////////////////////////////
// ->[extern] - Récup Variable toto depuis le main.c (= pas besoin de la déclarer ici !)
//
extern int toto;

int ftoto(int a)
{
    
    return toto+a;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// ->[STATIC] - Déclare la variable toto2 ici une première fois, puis l'incrémenter sans la réinitialiser après le premier passage dans la fonction !
//
int ftoto2(int a)
{
    static int toto2 = 0;
    toto2+=a;
    return toto2;
}