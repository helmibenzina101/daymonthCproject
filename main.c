#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m , a , d  ;
    printf("saisie mois \n");
    scanf ("%d" , &m);
    printf("saisie annee \n ");
    scanf ("%d",&a);
    if (m==2)
    {
        if (a%4==0 && a%100!=0 )
            d=29 ;
        else
            d=28 ;
    }
    else if (m%2==0)
            d=30 ;
    else
           d=31 ;
    printf("il y a %d jours dans votre mois ",d );
    return 0;
}
