#include <stdio.h>
#include <stdlib.h>
#include "liste.h"

int main(int argc, char **argv)
{
int i;
Lm_mot *pm1;
Lm_mot *pm2;
Lm_mot *l = lire_dico_Lmot("french_za");
char *mot1 ="arbre";
char *mot2 = "moru";
if(argc!=2){
  printf("Pb d'appel du programme \n");
  exit(1);
}
int nb2 = atoi(argv[1]);
for(i=0; i<nb2;i++){
  pm1 = chercher_Lm_mot(l, mot1);
  pm2 = chercher_Lm_mot(l, mot2);
}
if((pm1!=NULL)&&(pm2!=NULL))
printf("resultat correct");
else
printf("erreur !!!");
detruire_Lmot(l);
return 0;
  /* A completer */
}
