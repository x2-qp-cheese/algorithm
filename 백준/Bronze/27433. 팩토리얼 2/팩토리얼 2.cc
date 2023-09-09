#include <iostream>
using namespace std;

long long int recursive(int n){
    if (n <= 1){
        return 1;
    }
    return n * recursive(n-1);

}

int main(){
    int n;
    long long int result;
    cin >> n;
    result = recursive(n);
    cout << result;

}