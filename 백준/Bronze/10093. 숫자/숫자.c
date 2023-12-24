#include <stdio.h>

int main(){
    long long int a,b;
    scanf("%lld %lld", &a, &b);
    if(a==b){
        printf("0");
    }
    else if(a<b){
        printf("%lld\n", b-a-1);
        for(long long int c = a+1; c<b; c++){
            printf("%lld ", c);
        }
    }
    else{
        printf("%lld\n", a-b-1);
        for(long long int c = b+1; c<a; c++){
            printf("%lld ", c);
        }
    }
    return 0;
}