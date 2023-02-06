#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "exercice_1.h"

int pgcd(int val1, int val2)
{
   int pgcd = 0;
   for (int i = val1; i > 0; i--)
   {
      if (val1 % i == 0 && val2 % i == 0 && pgcd < i)
      {
         pgcd = i;
      }
      // Veuillez compléter la fonction à partir d'ici
      // VOTRE CODE ICI
      // Ne pas modifier le programme après cette ligne
   }
   return pgcd;
}
