#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {
    int min = 1, max = 6;
    srand(time(NULL));
    int kostka1, kostka2;
    kostka1 = (rand() % (max - min + 1)) + min;
    kostka2 = (rand() % (max - min + 1)) + min;
    printf("Zrovna ti padla %i a %i", kostka1, kostka2);
    return 0;
}