#include <iostream>
using namespace std;

int main(){
    int result = 1;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
        result*=2;
    cout << result;
}