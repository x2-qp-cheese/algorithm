#include <stdio.h>

int main(){
    int n = 0;
    scanf("%d", &n);

    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < i; j++){
            printf(" ");
        }
        for(int j = 0; j < 2*n-1 - 2*i; j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i = 0; i < n-1; i++){
        printf(" ");
    }
    printf("*\n");

    for(int i = n-2; i >= 0; i--){
        for(int j = i; j > 0; j--){
            printf(" ");
        }
        for(int j = 0; j < 2*n-1 - 2*i; j++){
            printf("*");
        }
        printf("\n");
    }
}