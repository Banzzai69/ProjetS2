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
      for(int i=0; i<TMAX,t[i]!=0; i++) {
        
        printf("[%i] ", t[i]);
      }
      
    {

        printf("\n");
    }
}


int rechercher_departements(int t[],int len,int x)
{
    for(int i = 0; i<len; i++ )
    {   
        if (t[i]==x)
        {printf("Département trouvé:%d\n",x);
        return 1;
                }
    }
    printf("Département non trouvé:%d\n",x);
    return 0;
};
  

int inserer_donnees(int t[])
{
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
    if(rechercher_departements(t, len,x))  // On utilise le code de la recherche de departement pour eviter la répétition de code
    {
   
        printf("Le département a ete trouve: %d", x);
        return 0;
    }

    
    for (int i = 0; i < TMAX; i++)
    {
        if(t[i] == 0) 
       {   
            t[i] =x; //x correspond à la valeur qu'on veut rajouter dans le tableau
    
            printf("Département ajouté : %d\n", t[i]);
            return 1;   
        }
    
    }
}

int supprime_donnee(int t[],int len,int x)
{
        for(int i=0;i<len;i++)
    {
        if(t[i]==x)
        {
            for(int j=i;j<len-1; j++) // j est la position du pointeur qu'on veut supprimer
                t[j]=t[j+1]; //  on décale chaque élément du tableau d'une position vers la gauche à partir de la position i.
            len--; // Cela correspond à la réduction de la taille du tableau après la suppression de l'élément.
            i--; // Cela permet de maintenir la position du pointeur après la suppression, en le pointant sur l'élément suivant dans le tableau réduit.
        }
    }

}

