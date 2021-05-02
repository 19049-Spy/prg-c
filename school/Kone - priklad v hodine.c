#include <stdio.h>
#include <stdlib.h>

/* Ve stáji jsou koně a lidé. Celkem se ve stáji nachází 22 hlav a 72 nohou. Kolik je ve stáji lidí a koní?*/

int main() {
    int pocet_hlav = 22;
    int pocet_nohou = 72;
    int kone;
    int lide;
    lide = 0;
    
    do{
        lide++;
        kone = pocet_hlav -lide; }
        while(lide * 2 + kone * 4 != pocet_nohou);
        printf("lide = %i, kone = %i", lide, kone);
    }