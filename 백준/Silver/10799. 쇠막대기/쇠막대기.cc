#include <iostream>
#include <stack>
#include <cstring>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int result = 0;

    string input;
    cin >> input;

    stack<int> bar;
    for(int i = 0; i < input.length(); i++){
        if(input[i] == '('){
            bar.push(input[i]);
        }
        else if(input[i] == ')'){
            if(input[i-1] == '('){
                bar.pop();
                result+=bar.size();
            }
            else{
                bar.pop();
                result++;
            }
        }
    }
    cout << result;
    return 0;
}