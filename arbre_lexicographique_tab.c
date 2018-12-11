#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "arbre_lexicographique_tab.h"


PNoeudTab creer_noeud(char lettre) {
    
  /* A completer */

  PNoeudTab n = (PNoeudTab)malloc(sizeof(PNoeudTab));
  if(n == NULL){
    printf("pb d'alloc");
    return NULL;
  }
  n->lettre = lettre;
  n->fin_de_mot = mot_fin;
  int i;
  for(i=0;i<26;i++){
    n->fils[i]=NULL;
    return n;
  }
  
  return NULL;
}

PNoeudTab ajouter_mot(PNoeudTab racine, char *mot) {
  
  /* A completer */

  if(strlen(mot)==0){
    racine -> fin_de_mot = fin;
    return racine;
  }
  if(racine->fils[mot[0]-"a"]==NULL){
    racine->fils[mot[0]-"a"]=creer_noeud(mot[0]);
  }
  racine -> fils[mot[0]-"a"]=ajouter_mot(racine->fils[mot[0]];
  return racine;
}

void afficher_mots(PNoeudTab n, char mot_en_cours[LONGUEUR_MAX_MOT], int index) {
  if (n==NULL)
    return;

  if(n->fin_de_mot==fin) {
    mot_en_cours[index]='\0';
    printf("%s\n",mot_en_cours);
  }

  int i;
  for(i=0;i<26;i++) {
    // On affiche les fils
    if (n->fils[i]!=NULL) {
      mot_en_cours[index] = n->fils[i]->lettre;
      afficher_mots(n->fils[i],mot_en_cours,index+1);
    }
  }
}

void afficher_dico(PNoeudTab racine) {
  

char res[26]; 
res[0]='\0';
test(res, racine);
}


void test(char* res, PNoeudTab pn){
  int i = 0;
  while(res[i]=='\0'){
    i+=1;
  }
  res[i]=pn.lettre;
  res[i+1]='\0';


  for(i=0;i<26;i++){
    if(!pn->fils[i]==NULL){
     test(res,pn->fils[i]);
    }
  }
  if(pn.FDM = fin){
    printf("%s",res);
  }
}

void detruire_dico(PNoeudTab dico) {
  
  
  
}

int rechercher_mot(PNoeudTab dico, char *mot) {

   if(dico->fils[mot[0]-'a']==NULL){
    return 0;
  }
  if(strlen(mot)==1){
    return dico->fils[mot[0]-'a']->fin_de_mot==fin;
  }
  return rechercher_mot(dico->fils[mot[0]-'a'],mot+1);
  
}
  

PNoeudTab lire_dico(const char *nom_fichier) {
  
  /* A completer */
  
  File *f = fopen(nomfichier,"r");
  if(f == NULL){
    printf("probleme de lecture du fichier");
    return NULL;
  }
  char ligne[LONGUEUR_MAX,f];
  PNoeudTab dico = creer_noeud('.');
  while(ligne!=NULL){
    if(!fgets(ligne,LONGUEUR_MAX,f)){
      break;
    }
    ligne[strlen(ligne)]-1='\0';
    if(strlen(ligne)>=1){
      dico=ajoute_mot(dico,ligne);
    }
  }
  fclose();

   return NULL;
}

Lm_mot *tous_les_mots_longueur_donnee_rec(PNoeudTab n, char mot_en_cours[LONGUEUR_MAX_MOT], 
                                                 int index, int l, Lm_mot *res) {
  
  /* A completer (Exercice 7) */

  return NULL;
}

Lm_mot *tous_les_mots_longueur_donnee(PNoeudTab racine, const char* prefixe, int l) {
  
  /* A completer (Exercice 7) */

   return NULL;
}

Lm_mot *mots_commencant_par(const char *mot_a_completer, PNoeudTab dico) {
  Lm_mot *res=NULL;
  
  /* A completer (Exercice 7) */

  return res;
}
