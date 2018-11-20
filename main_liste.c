#include <stdio.h>
#include <stdlib.h>
#include "liste.h"

int main(int argc, char **argv)
{
int i;
lm_mot *pm1;
lm_mot *pm2;
ml_mot *l = lire_dico("french_za");
char *mot1 ="arbre";
char *mot2 = "moru";
if(argc!=2){
  printf("Pb d'appel du programme \n");
  exit(1);
}
int nbz = atoi(argv[1]);
for(i=0; i<nbz;i++){
  pm1 = chercher_lm_mot(l, mot1);
  pm2 = chercher_lm_mot(l, mot2);
}
if((pm1!=NULL)&&(pm2!=NULL))
printf("resultat correct");
else
printf("erreur !!!");
detruire_lm_mot(l);
return 0;
  /* A completer */

  return 0;
}
