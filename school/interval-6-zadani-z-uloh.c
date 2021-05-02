#include <stdio.h>

int main(){
    vypiseCislaZIntervalu(1, 190);
    return 0;
}

void vypiseCislaZIntervalu(int start, int end){
    for(start; start <= end; start++){
        if(start != start || start != end){
            printf("%i, ", start);
        }
        else{
            printf("%i", start);
        }
    }
}