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
   if (valeur & comparteur == 1){
      return 1;
   }
   else {
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
      n = compare(valeur, comparateur);
      comparateur = comparateur << 1;

      // printf("%d",n);
      printf("owo");
      printf("%d", comparateur);
      printf("\n");
   }
   if (n % 2 == 0)
   {
      parite = true;
   }
   // Ne rien modifier après cette ligne
   return parite;
}
int main(int argc, char **argv)
{
   // Complétez la fonction à partir d'ici
   char hehe = 0b00100011;
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
