#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"fonction.h"



void ajouter_stock(stockage st, char fichier[] )
{
FILE*f;

f=fopen(fichier,"a+");
if(f!=NULL)
{
fprintf(f,"%s %s %s %s %d %d %d %d %d %d %d \n ",st.referance,st.nom,st.type,st.etat,st.quantite,st.da.jour,st.da.mois,st.da.annee,st.dx.jour,st.dx.mois,st.dx.annee);
fclose(f);
}
else 
printf("Impossible d'ouvrir le fichier");
}




void modifier(char referance[] , stockage st , char fichier[])
{
FILE*f1;
FILE*f2;
stockage aux ;
f1=fopen(fichier,"r");
f2=fopen("aux.txt","w+");
if((f1!=NULL)&&(f2!=NULL))
{
while(fscanf(f1,"%s %s %s %s %d %d %d %d %d %d %d \n ",st.referance,st.nom,st.type,st.etat,&st.quantite,&st.da.jour,&st.da.mois,&st.da.annee,&st.dx.jour,&st.dx.mois,&st.dx.annee)!=EOF)
{
if(strcmp(referance,aux.referance)!=0)
fprintf(f2,"%s %s %s %s %d %d %d %d %d %d %d  \n",aux.referance,aux.nom,aux.type,aux.etat,aux.quantite,aux.da.jour,aux.da.mois,aux.da.annee,aux.dx.jour,aux.dx.mois,aux.dx.annee);
else
fprintf(f2,"%s %s %s %s %d %d %d %d %d %d %d \n ",st.referance,st.nom,st.type,st.etat,st.quantite,st.da.jour,st.da.mois,st.da.annee,st.dx.jour,st.dx.mois,st.dx.annee);
}
fclose(f1);
fclose(f2);
remove(fichier);
rename("aux.txt",fichier);
}
}




void supprimer ( char referance[] ,stockage st, char fichier[])
{
stockage aux;
FILE*f1=NULL;
FILE*f2=NULL;
f1=fopen(fichier,"r");
f2=fopen("aux.txt","w+");
while(fprintf(f1,"%s %s %s %s %d %d %d %d %d %d %d \n ",st.referance,st.nom,st.type,st.etat,st.quantite,st.da.jour,st.da.mois,st.da.annee,st.dx.jour,st.dx.mois,st.dx.annee)!=EOF)
{
if(strcmp(referance , st.referance)!=0)
fprintf(f2,"%s %s %s %s %d %d %d %d %d %d %d \n ",st.referance,st.nom,st.type,st.etat,st.quantite,st.da.jour,st.da.mois,st.da.annee,st.dx.jour,st.dx.mois,st.dx.annee);
}
fclose(f1);
fclose(f2);
remove(fichier);
rename("aux.txt",fichier);
}
