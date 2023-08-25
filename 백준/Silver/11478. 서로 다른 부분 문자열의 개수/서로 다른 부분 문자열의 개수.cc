#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    string str;
    map <string, int> res;
    int length = 1; 
    
    cin >> str;
    int full = str.length();
    string tmp;
    while(length != full + 1){
        for(int i = 0; i <= full-length; i++){
            tmp = str.substr(i,length);
            res[tmp] = 1;
        }
        length++;
    }

    cout << res.size();
}