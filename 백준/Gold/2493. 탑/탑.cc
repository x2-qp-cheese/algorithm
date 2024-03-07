#include <iostream>
#include <stack>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n, tmp;
    stack<pair<int, int>> stk;

    cin >> n;


    for(int i = 0; i < n; i++){
        cin >> tmp;
        while(!stk.empty()){
            if(stk.top().second > tmp){
                cout << stk.top().first << " ";
                break;
            }
            stk.pop();
        }
        if (stk.empty()){
            cout << "0 ";
        }

        stk.push({i+1, tmp});
    }
    return 0;
}