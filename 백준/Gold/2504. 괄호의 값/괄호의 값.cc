#include <iostream>
#include <stack>
#include <cstring>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    string input;
    stack<char> stk;

    cin >> input;

    int len = input.length();

    int result = 0;
    int tmp = 1;

    for(int i = 0; i < len; i++){
        if(input[i] == '('){
            stk.push('(');
            tmp*=2;
        }

        else if(input[i] == '['){
            stk.push('[');
            tmp*=3;
        }

        else if(input[i] == ')'){
            if(stk.empty() || stk.top() != '('){
                cout << 0;
                return 0;
            }
            if(input[i-1] == '('){
                result+=tmp;
            }
            tmp/=2;
            stk.pop();
        }

        else{
            if(stk.empty() || stk.top() != '['){
                cout << 0;
                return 0;
            }
            if(input[i-1] == '['){
                result+=tmp;
            }
            tmp/=3;
            stk.pop();
        }

    }

    if(!stk.empty())
        result = 0;

    cout << result;

    return 0;
}