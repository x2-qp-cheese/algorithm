#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int n;
    scanf("%d", &n);

    long long int number;
    long long int log;
    long long int check = 0;

    for(int i = 0; i < n; i++){
        check = 0;
        scanf("%lld", &number);
       
        while(1){
            if(number<=2){
                number = 2;
                break;
            }

            check = 0;
            log = sqrt(number);

            for(int i = 2; i <= log; i++){
                if(number%i == 0){
                    check++;
                    break;
                }
            }
            if(check == 0)
                break;
            number++;
        }

        printf("%lld\n", number);
    }
}