#include <stdio.h>
#include <math.h>

int main() {
    // Mocniny od 1 do 1024 pomoci dvou promennych jedne promenne 
    for (int number = 1; number <= 1024; number = number * 2) {
        printf("%i ", number);
    }
    return 0;
}