#include <stdio.h>

int main() {
    int n = 8;

    printf("--\n --- Sachovnice ---\n");
    for (int y = 0; y < n; y++) {
        for (int x = 0; x < n; x++) {
            if ((x + y) % 2 == 0) {
                printf("0");
            }
            else {
                printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}