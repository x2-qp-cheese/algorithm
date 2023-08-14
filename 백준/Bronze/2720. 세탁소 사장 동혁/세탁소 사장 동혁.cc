#include <iostream>

using namespace std;

int main(){
    int money;
    int n;
    int quarter, dime, knickel, penny;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> money;
        quarter = money/25;
        money%=25;
        dime = money/10;
        money%=10;
        knickel = money/5;
        money%=5;
        penny = money/1;
        cout << quarter << " " << dime << " " << knickel << " " << penny << endl;
    }
}