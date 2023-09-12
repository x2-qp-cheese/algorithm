#include <iostream>
#include <cmath>
using namespace std;

void print(int n, int a, int b, int c){
    if(n == 1)
        cout << a << " " << c << "\n";
    else{
        print(n-1, a, c, b);
        cout << a << " " << c << "\n";
        print(n-1, b, a, c);
    }
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    int result = pow(2, n) - 1;
    cout  << result << "\n";
    print(n, 1, 2, 3);
}