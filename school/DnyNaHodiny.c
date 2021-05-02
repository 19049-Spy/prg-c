#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main() {
    int day, hours, sum;
    printf("Zadjte pocet dnu: ");
    scanf("%d", &day);
    printf("Zadejte pocet hodin: ");
    scanf("%d", &hours);
    day = day * 24;
    sum = day + hours;
    printf("Celkovy pocet hodin po prevodu: %d", sum);
    return 0;
}