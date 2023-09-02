#include <iostream>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n = 0;
    int count = 0;
    cin >> n;
    for(int i = 1; i*i <= n; i++){
        count++;
    }

    cout << count;
}