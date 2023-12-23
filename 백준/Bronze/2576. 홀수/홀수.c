#include <stdio.h>

int main(){
    int add = 0;
    int n;
    int min = 101;
    for(int i = 0; i < 7; i++){
        scanf("%d", &n);
        if(n%2 == 1){
            add+=n;
            if(min > n)
                min = n;
        }
    }
    if(add)
        printf("%d\n%d", add, min);
    else
        printf("-1");
}