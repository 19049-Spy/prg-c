#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int x, y, z;
    printf("Nasobilka:\n");
    for(x=1; x<=10; x++){
        for(y=0; y<=20; y++){
            if(y==0){
                printf("%4i",x);
            }
            else{
                z = x * y;
                printf("%4i", z);
            }
        }
        printf("\n");
    }
}