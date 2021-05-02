#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("%d", podminka(5, 5));
    return 0;
}

void podminka(int x, int y){
    return (x * 4) + 3 < (y * 5) - 1;
}