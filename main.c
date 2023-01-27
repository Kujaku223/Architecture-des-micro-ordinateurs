#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int compare(char valeur, char comparteur)
{
   //  printf("%d", valeur);
   //    printf("%d", comparteur);
   int a = valeur & comparteur;
   // printf("%d",a);
   // printf("\n");
   if (valeur & comparteur == 1)
   {
      printf("yes");
      return 1;
   }
   else
   {
      printf("no");
      return 0;
   }
}

bool parite(char valeur)
{
   bool parite = false;
   // Complétez la fonction à partir d'ici
   bool match;
   char comparateur = 0b00000001;
   int n = 0;

   for (int i = 0; i < 8; i++)
   {
      n += compare(valeur, comparateur);
      printf("n:");
      printf("%d",n);
      valeur = valeur >> 1;

   }
   if (n % 2 == 0)
   {
      parite = true;
   }

   return parite;
}
int main(int argc, char **argv)
{
   char hehe = 0b00111110;
   if (parite(hehe))
   {
      printf("YAAAAAAAAAAAAAAAAAH");
   }
   else
   {
      printf("NAAAAAAAAAAAAAAAAAH");
   }
   // Ne rien modifier après cette ligne
   return 0;
}
