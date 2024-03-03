#include <iostream>
#include <algorithm>
#include <cstring>
#include <deque>
#include <sstream>

using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);  

    int num;

    char p[100001];
    int n;
    string s;
    int error;
    int rev;
    int len;
    
    cin >> num;
    cin.ignore();

    for(int i = 0; i < num; i++){
        rev = 0;
        error = 0;

        cin >> p;
        cin >> n;
        cin.ignore();
        getline(cin, s);

        stringstream ss(s);
        deque<int> numbers;

        while(getline(ss,s,',')){
            if(s.front() == '['){
                s.erase(s.begin());
            }
            if(s.back() == ']'){
                s.pop_back();
            }
            if(!s.empty()){
                numbers.push_back(stoi(s));
            }
        }

        len = numbers.size();

        for(int j = 0; j < strlen(p); j++){
            if(p[j] == 'R'){
                if(rev == 0)
                    rev = 1;
                else if(rev == 1)
                    rev = 0;
            }
            else if(p[j] == 'D'){
                if(len == 0){
                    error = 1;
                    break;
                }

                if(rev == 0){
                    numbers.pop_front();
                    len--;
                }
                else{
                    numbers.pop_back();
                    len--;
                }
            }
        }

        if(error){
            cout << "error\n";
        }
        
        else{
            cout << "[";
            if(rev == 0){
                for (int k = 0; k < len; k++) {
                    cout << numbers[k];
                    if (k != len - 1)
                        cout << ",";
                }
            }
            else{
                for (int k = len-1; k >= 0; k--) {
                    cout << numbers[k];
                    if (k != 0)
                        cout << ",";
                }
            }
            cout << "]\n";
        }

    }
    return 0;
}
