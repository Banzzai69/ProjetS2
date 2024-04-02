#ifndef FUNCTIONS_C
#define  FUNCTIONS_H
#define TMAX 50

int length(int t[]);

void afficher_departements(int t[], int len);

int rechercher_departements(int t[],int len,int x);

int inserer_donnees(int t[]);

int ajout_departement(int t[],int len,int x);

int supprime_donnee(int t[],int len,int x);
#endif 