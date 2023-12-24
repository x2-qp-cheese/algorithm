#include <stdio.h>

int main(){
    int n;
    int space = 0;
    scanf("%d", &n);

    for(int i = 2*n-1; i>=1; i-=2){
        for(int k = 0; k < space; k++){
            printf(" ");
        }
        for(int j = 0; j<i; j++){
            printf("*");
        }
        space++;
        printf("\n");
    }
}