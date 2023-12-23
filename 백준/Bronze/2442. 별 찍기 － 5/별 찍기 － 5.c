#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int k = n-1;
    for(int i = 0 ; i < n; i++){
        int j = 2 * i + 1;
        for(int l = 0; l < k; l++){
            printf(" ");
        }
        for(int m = 1; m <= j; m++){
            printf("*");
        }
        printf("\n");
        k--;
    }
}