#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int a = 0;
    int b[1000];
    int j = 0;
    int add = 0;

    cin >> a;
    while(a!=-1){
        j = 0;
        add = 0;
        for (int i = 1; i < a; i++){
            if (a % i == 0){
                b[j++] = i;
                add += i;
            }
        }
        if (add != a)
            cout << a << " is NOT perfect." << endl;
        else{ 
            cout << a << " = ";
            for (int k = 0; k < j-1; k++){
                cout << b[k] << " + ";
            }
            cout << b[j-1] << endl;
        }
        cin >> a;
    }
}