#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    int hours, sum, days = 0;
    printf("Zadejte pocet hodin: ");
    scanf("%d", &hours);
    while (hours > 23) {
        hours = hours - 24;
        days++;
    }
    printf("Dnu: %d a hodin: %d", days, hours);
    return 0;
}