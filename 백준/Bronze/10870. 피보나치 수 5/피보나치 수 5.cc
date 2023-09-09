#include <iostream>
using namespace std;

long long int fac(int n){
    if(n==0)
        return 0;
    else if(n == 1)
        return 1;

    return fac(n-1) + fac(n-2);
}
int main(){
    int n = 0;
    cin >> n;
    cout << fac(n);
}