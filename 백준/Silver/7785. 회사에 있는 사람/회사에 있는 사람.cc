#include <iostream>
#include <map>
using namespace std;

int main(){
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int n;
    map <string, string, greater<string> > res;
    map <string, string> :: iterator iter; 
    string name;
    string status; 
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> name >> status;
        res[name] = status;
    }
    for(iter = res.begin(); iter != res.end(); iter++){
        if(iter->second == "enter")
            cout << iter->first << "\n";
    }
}