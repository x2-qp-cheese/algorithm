#include <iostream>
using namespace std;

int main(){
    int a = 0;
    cin >> a;
    for (int i = 2; i <= a; i++){
        while(a%i==0){
            cout << i << endl;
            a/=i;
        }
    }
}