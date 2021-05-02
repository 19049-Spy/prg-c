#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int area [10];
    int sum = 0;
    int i;

    srand(time(0));

    for (i = 0; i < 10; i++){
        area [i] = rand() % 100 + 1;
    }

    int max = area [0];
    int min = area [0];
    int average;

    for (i = 0; i < 10; i++){
        printf("Area [%d] = %d\n", i, area[i]);
    }
    
    for (i = 0; i < 10; i++){
        if(max < area [i])
        max = area[i];
        if(min > area [i])
        min = area [i];
        sum += area[i];
    }

    printf("\n\nNejvetší číslo = %d", max);
    printf("\nNejmenší číslo = %d", min);
    printf("\nSoučet = %d", sum);
    printf("\nPrůměr = %.2f", average / (float)10);
    printf("\nPrůměr po odstranění min a max hondoty %.2f", (sum - min - max) / (float)8);
    return 0;
}