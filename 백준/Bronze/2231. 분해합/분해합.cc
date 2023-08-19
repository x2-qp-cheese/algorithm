#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n = 0;
    int temp;
    cin >> n;
    int i;
    int sum = 0;
    int result = 0;
    for(i = 1; i < n; i++){
        sum = 0;
        temp = i;
        while(temp != 0){
            sum+=temp%10;
            temp/=10;
        }
        if(sum+i==n){
            result = i;
            break;
        }
    }

    cout << result;

    return 0;
}