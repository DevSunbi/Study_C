#include <stdio.h>

int main(void) {
    int h, m, t;
    scanf("%d %d %d", &h, &m, &t);
    
    // Calculate total minutes from the start of the day
    int total_minutes = h * 60 + m + t;
    
    // Normalize to a 24-hour format
    total_minutes %= (24 * 60);
    
    // Calculate new hour and minute
    h = total_minutes / 60;
    m = total_minutes % 60;
    
    printf("%d %d\n", h, m);
    
    return 0;
}