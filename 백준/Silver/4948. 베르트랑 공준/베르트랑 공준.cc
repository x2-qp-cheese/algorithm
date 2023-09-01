#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    int log = 0;
    int result = 0;
    int check = 0;
    while(1){
        scanf("%d", &n);
        if(n == 0)
            break;
        for(int i = n+1; i <= 2*n; i++){
            check = 0;
            log = sqrt(i);
            for(int j = 2; j <= log; j++){
                if(i%j == 0){
                    check = 1;
                    break;
                }
            }
            if(check == 0)
                result++;
        }
        printf("%d\n", result);
        result = 0;
        check = 0;
    }
}