#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(){
    int n;
    int cnt = 1;
    int a;
    cin >> n;
    stack<int> stk;
    vector<char> res;

    for(int i = 0; i < n; i++){

        cin >> a;

        while(cnt <= a){
            stk.push(cnt);
            res.push_back('+');
            cnt++;
        }

        if(stk.top() == a){
            stk.pop();
            res.push_back('-');
        }

        else{
            cout << "NO";
            return 0;
        }
    }

    for(int i = 0; i < res.size(); i++){
        cout << res[i] << "\n";
    }
}