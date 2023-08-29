#include <iostream>
#include <map>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    string name;
    int n = 0;
    int m = 0;
    map <string, int> bystr;
    map <int, string> byint;
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        cin >> name;
        bystr[name] = i;
        byint[i] = name;
    }
    for(int j = 0; j < m; j++){
        cin >> name;

        if(name.at(0) <= '9')
            cout << byint[stoi(name)] << "\n";
        else
            cout << bystr[name] << "\n";
    }

}