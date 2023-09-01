#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int n, m;
    int log;
    int check = 0;
    scanf("%d %d", &n, &m);

    for (int i = n; i<=m; i++){
        check = 0;
        log  = sqrt(i);
        if(i != 1){
            for(int j = 2; j <= log; j++){
                if(i%j == 0){
                    check = 1;
                    break;
                }
            }
            if(check == 0)
                printf("%d\n", i);
        }
    }
}