#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "exercice_1.c"
//switched to c

int main(int argc, char** argv) {

   // TODO: Demander à l'utilisateur deux valeurs pour trouver le PGCD entre elles
   // TODO: Appeler la fonction implementée dans le fichier exercice_1.c
   // TODO: Afficher le PGCD calculé

   int val1, val2, res = 0;

   // Compléter le programme à partir d'ici
   printf("valeur 1:\n");
   scanf("%d",&val1);

   printf("valeur 2:\n");
   scanf("%d",&val2);
   // Ne pas modifier le programme après cette ligne

   res = pgcd(val1, val2);

   printf(" le pgcd est:\n %d \n", res);
   return 0;
}

