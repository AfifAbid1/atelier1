#ifndef FONCTION_H_
#define FONCTION_H_

typedef struct 
{
    char nom[20];
    char prenom[20];
    int CIN;
    char date[20];
    char motdepasse[20];
}etudiant;


void ajouter(etudiant e,char fichier[]);
void supprimer_etudiant(int CIN,char fichier[]);
void modifier(int CIN,etudiant a,char fichier[]);
etudiant chercher_etudiant(int CIN,char fichier[]);
void afficher(etudiant e ,char fichier[]);
#endif




