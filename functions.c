#include <stdio.h>
#include "functions.h"

int length(int t[])
{
    int len =0;

    for (int i = 0; t[i] !='\0';i++)
    {
        len++;
    }

    return len;
}

void afficher_departements(int t[], int len)
{
      for(int  i = 0; i<len; i++) {
        printf("[%i] ", t[i]);
      }
      
    {

        printf("\n");
    }
}

int rechercher_departements(int t[],int len,int x) {
    for(int i = 0; i<len; i++ )
    {
        if (t[i]==x)
        {printf("Département trouvé:%d\n",x);
        return 1;
                }
    }
    printf("Département non trouvé:%d\n",x);
    return 0;
}

int inserer_donnees(int t[]){
int x=0;
int i=0;
do {
    printf("Entrez un chiffre:%d\n",x);
    scanf("%d",&x);
    t[i]=x;
    i++;
}

while(x !=-1 && i < TMAX);
t[i]='0';
};
