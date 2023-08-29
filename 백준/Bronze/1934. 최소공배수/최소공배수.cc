#include <iostream>
using namespace std;

int gcd(int a, int b){
    int r = a%b;
    if(r != 0)
        return gcd(b, r);
    else
        return b;
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int n = 0;
    cin >> n;

    int a, b;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        if (a>=b)
            cout << (a*b)/gcd(a,b) << endl;
        else
            cout << (a*b)/gcd(b,a) << endl;
    }
}