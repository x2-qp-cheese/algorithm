#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string a;
    string b;

    cin >> a;
    cin >> b;
    int length_a = a.size();
    int length_b = b.size();

    for(int i = length_b; i > length_a; i--){
        if(b.at(i-1) == 'A')
            b.pop_back();
        else{
            b.pop_back();
            reverse(b.begin(), b.end());
        }
    }
    if(a == b)
        cout << "1";
    else
        cout <<"0";

}