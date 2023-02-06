#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


int main(int argc, char **argv)
{
   int taille = 0;
   int valeur = 0;
   int nbElement = 0;
   int *pointeurCalloc; // Utilisez calloc ou malloc
   int *pointeurMalloc; // Utilisez calloc ou malloc

   // Complétez le programme à partir d'ici
   // Ne pas modifier le programme après cette ligne
   printf("nombre d'elements:\n");
   scanf("%d", &nbElement);
   pointeurCalloc = calloc(2 * nbElement, 1);
   for (int i = 0; i < nbElement; i++)
   //while
   {
      int element;
      printf("element :\n");
      scanf("%d", &element);
      if (element == -1)
      {
         printf("--------------\n");
         for (int y=0; y < i; y++)
         {
            printf("%d",pointeurCalloc[y]);
            printf("\n");
         }
         return 0;
      }
      pointeurCalloc[i] = element;

   }

   free(pointeurCalloc);
   return 0;
}
