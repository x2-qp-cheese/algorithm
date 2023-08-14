#include <iostream>

using namespace std;

int main(){
    int a, b;
    int result[100];
    cin >> a >> b;
    int count = 0;
    while(a!=0){
        result[count++] = a%b;
        a /= b;
    }

    for (int i = count-1; i >= 0; i--){
        if(result[i]>=0 && result[i]<=9){
            cout << result[i];
        }
        else{
            char ch = result[i]-10+'A';
            cout << ch;
        }
    }
}