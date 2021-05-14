#include <stdio.h>
#include <string.h>

void caesar_encrypt(size) {
    char text[] = "MONOPOLY";
    printf("Pred zasifrovanim: \t%s\n", text);
    for (int i = 0; i < strlen(text); i++){
        text[i] += size; 
        }
    printf("Po zasifrovani: \t%s\n", text);
}

int main(){
    caesar_encrypt(3);
    return 0;
}