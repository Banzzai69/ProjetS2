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
      for(int  i = 0; i<len, t[i] !=0; i++) {
        
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
}

int ajout_departement(int t[],int len,int x)
{
    if(rechercher_departements(t, len,x)) 
    {
   
        printf("Le département a ete trouve:",x);
        return 0;
    }

    
    for (int i = 0; i < TMAX; i++)
    {
        if(t[i] == 0)
       {   
            t[i] =x;
    
            printf("Département ajouté : %d\n", t[i]);
            return 1;   
        }
    
    }
}
    
    
