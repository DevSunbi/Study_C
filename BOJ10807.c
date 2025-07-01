#include <stdio.h>
#define MAX_SIZE 100
#define MIN_SIZE 1


int main(void){
    int n, v;
    int arr[MAX_SIZE] = {0}; // Initialize an array of size 100 with default values
    scanf("%d", &n);
    if (n < MIN_SIZE || n > MAX_SIZE) {
        printf("배열 크기 제한 위반\n");
        return 0;
}

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    scanf("%d", &v);
    
    int count = 0;
    
    for(int i = 0; i < n; i++){
        if(arr[i] == v){
            count++;
        }
    }  
    
    printf("%d\n", count);
    
    return 0;
}