#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n = 0;
    int count = 0;
    map<string, int> a;
    string tmp;
    cin >> n;
    while(n--){
        cin >> tmp;
        if(tmp == "ENTER"){
            count += a.size();
            a.clear();
        }
        else if(!a[tmp]){
            a[tmp] = 1;
        }
    }
    count+=a.size();
    cout << count;
}