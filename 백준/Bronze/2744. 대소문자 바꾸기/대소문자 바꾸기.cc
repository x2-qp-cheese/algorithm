#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char a[101];
    cin >> a;
    for(int i = 0; i < strlen(a); i++){
        if('a' <= a[i] && a[i] <= 'z'){
            a[i] += ('A'-'a');
        }
        else
            a[i] += ('a'-'A');
    }
    cout << a;
}