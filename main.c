#include <stdio.h>
#include "functions.h"

int main() 
{
    int ile_de_france[] = {75 , 77 , 78 , 91 , 92 , 93 , 94 , 95};
    int aura[] = {1,3,7,15,26,38,42,43,63,69,73,74};


printf("La liste des departement de la region parisienne:  ");

afficher_departements(ile_de_france, 8);  


printf("La liste des departement de la region parisienne:  ");

afficher_departements(ile_de_france, 8);  

printf("\n");

printf("La liste des departement de la region aura:  ");

afficher_departements(aura, sizeof(aura)/ sizeof(aura[0]));  

printf("\n");

rechercher_departements(aura,12,70);

printf("\n");

inserer_donnees (aura);
afficher_departements(aura,TMAX);


}