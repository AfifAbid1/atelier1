#include "fonction.h"
#include <stdio.h>
#include <string.h>




void ajouter(etudiant e,char fichier[])
{
    FILE *f;
    f=fopen(fichier,"a+");
    if (f!=NULL)
    {
    fprintf(f,"%s %s %d %s %s",e.nom,e.prenom,e.CIN,e.date,e.motdepasse);
    }
    fclose(f);
    

}


void supprimer_etudiant(int CIN,char fichier[])
{
    FILE *f1=NULL;
    FILE *f2=NULL;
    etudiant e;
    f1=fopen("fichier.txt","r");
    f2=fopen("auxil.txt","a");
    while(fscanf(f1,"%s %s %d %s %s",e.nom,e.prenom,&e.CIN,e.date,e.motdepasse)!=EOF)
    {
        if (CIN!=e.CIN)
            fprintf(f2,"%s %s %d %s %s",e.nom,e.prenom,e.CIN,e.date,e.motdepasse);
    }
    fclose(f1);
    fclose(f2);
    remove("fichier.txt");
    rename("auxil.txt",fichier);

}


void modifier(int CIN,etudiant a,char fichier[])
{
    FILE *f1,*f2;
    etudiant b;
    f1=fopen("fichier.txt","r");
    f2=fopen("auxil.txt","w+");
    while(fscanf(f1,"%s %s %d %s %s",a.nom,a.prenom,&a.CIN,a.date,a.motdepasse)!=EOF)
    {
        if(CIN==a.CIN)
          fprintf(f2,"%s %s %d %s %s",b.nom,b.prenom,b.CIN,b.date,b.motdepasse);
        else
          fprintf(f2,"%s %s %d %s %s",a.nom,a.prenom,a.CIN,a.date,a.motdepasse);
    }
    fclose(f1);
    fclose(f2);
    remove("fichier.txt");
    rename("auxil.txt","fichier.txt");
}


etudiant chercher_etudiant(int CIN,char fichier[])
{
    FILE *f=NULL;
    etudiant e;
    e.CIN=-1;
    strcpy(e.nom,"-1");
    f=fopen("fichier.txt","r");
    while(fscanf(f,"%s %s %d %s %s",e.nom,e.prenom,&e.CIN,e.date,e.motdepasse)!=EOF)
    {
        if (CIN==e.CIN)
            return e;
            fclose(f);
    }
    fclose(f);
    return e;
}


void afficher(etudiant e ,char fichier[])
{
  FILE *f=NULL;
  f=fopen("fichier.txt","rt");
  while(fscanf(f,"%s %s %d %s %s",e.nom,e.prenom,&e.CIN,e.date,e.motdepasse)!=EOF)
       {
        printf("%d",f);
       }
  fclose(f);
}



















