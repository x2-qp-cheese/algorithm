#include <iostream>
using namespace std;

int gcd(int a, int b){
    int r = a%b;
    if(r == 0)
        return b;
    else
        return gcd(b, r);
}


int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    long long int a, b;
    cin >> a >> b;
    int max = 0;
    if (a>b)
        max = gcd(a, b);
    else
        max = gcd(b, a);

    cout << a*b/max;
        
}