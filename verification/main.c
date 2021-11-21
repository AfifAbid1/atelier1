#include "fonction.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 

void main()
{

  printf("***************************************************************\n");
  printf("1-ajouter un etudiant\n");

   
  
  int a;
  etudiant e;
  scanf("%d",&a);
  if(a==1)
  {
   printf("donner le nom : ");
   scanf("%s",e.nom);
   printf("donner le prenom : ");
   scanf("%s",e.prenom);
   printf("donner le CIN : ");
   scanf("%d",&e.CIN);
   printf("donner la date de naissance : ");
   scanf("%s",e.date);
   printf("donner le mot de passe : ");
   scanf("%s",e.motdepasse);
   ajouter(e,"fichier.txt");
   printf("donner le CIN : ");
   scanf("%d",&CIN);
   supprimer_etudiant(CIN,"fichier.txt");
  }
  
}
