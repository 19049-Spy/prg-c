#include <stdlib.h>
#include <stdio.h>

int main() {
    int pocet;
    printf("Zadejtee pocet prvku: ");
    scanf("%d", &pocet);
    int pole[pocet];
    int i;

    for(i=0; i<pocet; i++) {
    printf("Vloz prvek cislo %d: ", i+1);
    scanf("%d", &pole[i]);
    }
    
    for(i=0; i<pocet; i++) {
    printf("Pole [%d] = %d\n", i, pole[i]);
    }
    return 0;
}