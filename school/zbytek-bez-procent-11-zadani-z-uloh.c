#include <stdio.h>

int main(){
    printf("%d\n", 15%10);
    printf("%d", getReminder(50,100));
    return 0;
}

int getReminder(num, num2){
    if (num2 == 0){
        printf("Nemuzes delit nulou");
        return -1;
    }
    int result = num/num2;
    int reminder = num - (result * num2);
    return reminder;
}