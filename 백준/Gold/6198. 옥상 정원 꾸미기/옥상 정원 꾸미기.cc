#include <iostream>
#include <stack>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n;
    long long int height;
    long long int result = 0;
    stack<long long int> stk;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> height;

        while(!stk.empty() && stk.top() <= height){
            stk.pop();
        }
        
        result+=stk.size();
        
        stk.push(height);
    }
    cout << result;
    return 0;
}