#include <stdio.h>
#include <math.h>
#define RAND_TRESHOLD 100

int main(){
    float oye[10];
    srand(time(NULL));
    generate_items(oye);
    show_items(oye);
    return 0;
}

void generate_items(float *pole){
    for(int i = 0; i < 10; i++){
        pole[i] = (rand() % RAND_TRESHOLD) + (rand() % RAND_TRESHOLD) / (float)RAND_TRESHOLD;
    }
}

void show_items(float *pole){
    for(int i = 0; i < 10; i++){
        printf("%.f ", pole[i]);
    }
}