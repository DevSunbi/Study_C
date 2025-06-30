#include <stdio.h>

int main(void){
    int year;
    scanf("%d", &year);
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
        printf("1\n"); // Leap year
    } else {
        printf("0\n"); // Not a leap year
    }
}