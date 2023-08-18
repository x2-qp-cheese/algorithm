#include <iostream>
using namespace std;

int main(){
    int a1, a0;
    int c, n0;

    cin >> a1 >> a0;
    cin >> c;
    cin >> n0;

    if(a1*n0+a0 <= n0 * c && a1 <= c)
        cout << 1;
    else
        cout << 0;
}