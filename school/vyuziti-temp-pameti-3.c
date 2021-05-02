#include <stdio.h>
#include <stdlib.h>

int main(){
    int byte[8] = {0,0,0,1,0,1,0,0};
    int size = sizeof(byte) / 4;
    
    printf("%d%d%d%d%d%d%d%d\n", byte[0], byte[1], byte[2], byte[3], byte[4], byte[5], byte[6], byte[7]);
    
    int tmp = byte[0];
    
    for(int i = 0; i <= sizeof(byte)/ 4 - 1; i++) {
        byte[i] = byte[i+1];
    }
    
    byte[size - 1] = tmp;
    
    printf("%d%d%d%d%d%d%d%d", byte[0], byte[1], byte[2], byte[3], byte[4], byte[5], byte[6], byte[7]);
    return 0;
}