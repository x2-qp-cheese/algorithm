#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;

    long long tmp;

    for(int i = 0; i < n; i++){
        cin >> tmp;
        if (tmp == (long long)pow(floor(sqrtl(tmp)), 2)){
            cout << "1 ";
        }
        else{
            cout << "0 ";
        }
    }
    return 0;
}