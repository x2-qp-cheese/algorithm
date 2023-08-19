#include <iostream>
using namespace std;

int main(){
    int n = 0;
    cin >> n;
    int st = n/5;
    int temp;
    int result = 0;
    while(1){
        temp = (n-5*st);

        if(temp%3 == 0){
            result = st + temp/3;
            break;
        }
        st--;
        if(st == -1){
            result = -1;
            break;
        }
    }
    cout << result;
}