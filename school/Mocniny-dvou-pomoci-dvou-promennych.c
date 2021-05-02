#include <stdio.h>
#include <math.h>

int main() {
    // Mocniny od 1 do 1024 pomoci dvou promennych
    int result;
    for (int exp = 0; exp <= 10; exp++) {
        result = 1;
        for (int i = 0; i < exp; i++) {
            result = result * 2;
        }
        printf("%i ", result);
    }
    return 0;
}