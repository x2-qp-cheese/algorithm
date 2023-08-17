#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    while(1){
        cin >> a >> b >> c;
        if (a==0 && b==0 && c==0)
            break;
        if(a < b+c && b < a+c && c < a+b){
            if(a==b && b==c)
                cout << "Equilateral" << endl;
            else if(a!=b && b!=c && c!=a)
                cout << "Scalene" << endl;
            else
                cout << "Isosceles" << endl;
        }
        else
            cout << "Invalid" << endl;
    }
}