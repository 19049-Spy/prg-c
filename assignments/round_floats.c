#include <stdio.h>
#include <math.h>
#define RAND_TRESHOLD 100

int main(){
    float oye[10];
    srand(time(NULL));
    generate_items(oye);
    printf("----- Pred zaokrouhleni na cele cisla za desetinou carkou: -----\n");
    show_items(oye);
    round_items(oye);
    printf("\n\n");
    printf("----- Po zaokrouhleni na cele cisla za desetinou carkou: -----\n");
    show_items(oye);
}

void generate_items(float *pole){
    for(int i = 0; i < 10; i++){
        pole[i] = (rand() % RAND_TRESHOLD) + (rand() % RAND_TRESHOLD) / (float)RAND_TRESHOLD;
    }
}

void show_items(float *pole){
    for(int i = 0; i < 10; i++){
        printf("Hodnota pole [%d] = %.2f\n", i, pole[i]);
    }
}

void round_items(float *pole){
    for(int i = 0; i < 10; i++){
        pole[i] = roundf(pole[i] * 10) / 10;
    }
}