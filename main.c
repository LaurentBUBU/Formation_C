#include<stdio.h>
#include"fonction.h"


int toto = 10;

int main()
{


    printf("a + b = %d\n",addition(5,5));
    printf("toto = %d\n",ftoto(5));
    printf("toto2 = %d\n",ftoto2(5));
    printf("toto2 = %d\n",ftoto2(5));
    printf("toto2 = %d\n",ftoto2(5));


    int mon_int = 15;
    short mon_short = 10;
    long mon_long = 10999;
    char mon_char = 'A';

    int ma_Valeur = 0;
    int ma_Puissance = 0;

    scanf("%d %d",&ma_Valeur,&ma_Puissance);
    printf("%d ^ %d = %I64d\n",ma_Valeur,ma_Puissance,puissance_de(ma_Valeur,ma_Puissance));

    printf("mon_short = %d - Taille: %d - maxi: %I64d\n",mon_short,sizeof(mon_short),puissance_de(2,(sizeof(mon_short)*8)));
    printf("mon_int = %d - Taille: %d - maxi: %I64d \n",mon_int,sizeof(mon_int),puissance_de(2,(4*8)));
    printf("mon_long = %ld - Taille: %d - maxi: %I64d \n",mon_long,sizeof(mon_long),puissance_de(2,(sizeof(mon_long)*8)));
    printf("mon_char = %c - Taille: %d - maxi: %I64d \n",mon_char,sizeof(mon_char),puissance_de(2,(sizeof(mon_char)*8)));


    return 0;
}



