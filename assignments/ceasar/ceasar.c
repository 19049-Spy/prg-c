#include <stdio.h>

/* Partially developed with Stack Overflow & friend that does reverse engineering in C */

int main(){
    char zprv[] = "HOW ABOUT NO";
    char sfra[] = "341";
    printf("----- Pred zasifrovanim -----\n");
    printf("%s\n\n", zprv);
    ceasar_encrypt(zprv, sfra);
    printf("----- Po zasifrovani -----\n");
    printf("%s", zprv);
    return 0;
}

void ceasar_encrypt(char *adr, char *spc){
    int x = 0, y = 0;
    while (*(adr + x) != '\0'){
        if (y > 2){
            y = 0;
        }
        else{
            if (*(adr + x) >= 65 && *(adr + x) <= 90){
                *(adr + x) += *(spc + y) - 48;
            }
        }
        x++;
        y++;
    }
}
