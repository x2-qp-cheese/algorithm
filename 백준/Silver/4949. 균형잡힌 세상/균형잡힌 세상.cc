#include <iostream>
#include <stack>
#include <cstring>

using namespace std;

int main() {
    stack<char> sk;
    char str[101];
    int check = 0;
    
    while (1) {
        check = 0;
        cin.getline(str, sizeof(str));
        
        if (str[0] == '.')
            break;
        
        for (int i = 0; i < strlen(str); i++) {
            if (str[i] == '(' || str[i] == '[')
                sk.push(str[i]);
            else if (str[i] == ')') {
                if (sk.empty() || sk.top() != '(') {
                    check = 1;
                    break;
                }
                sk.pop();
            }
            else if (str[i] == ']') {
                if (sk.empty() || sk.top() != '[') {
                    check = 1;
                    break;
                }
                sk.pop();
            }
        }
        
        if (!sk.empty()) {
            check = 1;
            while (!sk.empty()) sk.pop(); 
        }

        if (check == 1)
            cout << "no\n";
        else
            cout << "yes\n";
    }
    
    return 0;
}
