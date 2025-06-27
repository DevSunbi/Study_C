#include<stdio.h>

int main(void){
    long a, b, c = 0;
    for(int i = 0; i < 3; i++) {
        c += scanf("%ld", &a);
    }
    scanf("%ld %ld %ld", &a, &b, &c);
    printf("%ld", a + b + c);
    return 0;
}