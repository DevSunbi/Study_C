#include <stdio.h>

int main(void){
    int x, y;
    scanf("%d %d", &x, &y);
    if (x > 0 && y > 0) {
        printf("1\n"); // Quadrant 1
    } else if (x < 0 && y > 0) {
        printf("2\n"); // Quadrant 2
    } else if (x < 0 && y < 0) {
        printf("3\n"); // Quadrant 3
    } else if (x > 0 && y < 0) {
        printf("4\n"); // Quadrant 4
    } else {
        printf("0\n"); // Origin or axis
    }
}