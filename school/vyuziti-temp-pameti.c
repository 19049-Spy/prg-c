#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 1, b = 2;
    printf("%d, %d\n", a, b);
    int tmp;
    tmp = a, a = b, b = tmp;
    printf("%d, %d\n", a, b);
    return 0;
}