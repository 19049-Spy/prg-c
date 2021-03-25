#include <stdlib.h>
#include <stdio.h>

int main() {
   int x, y = 0, h, oddelovac;
   printf("Zadejte pocet radku v paskalove trojuhelniku: ");
   scanf("%d", &h);
   
   for(x = 1; x <= h; ++x, y = 0) {
      for(oddelovac = 1; oddelovac <= h - x; ++oddelovac) {
         printf("  ");
      }
      while(y != 2*x - 1) {
         ++y;
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}