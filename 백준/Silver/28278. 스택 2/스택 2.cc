#include <iostream>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int arr[1000000];
    int n = 0;
    int stk = 0;
    int a, b;
    cin >> n;
    while(n--){
        cin >> a;
        if(a == 1){
            cin >> b;
            arr[++stk] = b;
        }
        else if(a == 2){
            if(stk>=1)
                cout << arr[stk--] << "\n";
            else
                cout << "-1" << "\n";
        }
        else if(a == 3){
            cout << stk << "\n";
        }
        else if(a == 4){
            if (stk < 1)
                cout << "1" << "\n";
            else
                cout << "0" << "\n";
        }
        else if(a == 5){
            if(stk>=1)
                cout << arr[stk] << "\n";
            else
                cout << "-1" << "\n";
        }
    }
}