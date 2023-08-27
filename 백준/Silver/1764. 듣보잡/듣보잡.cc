#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n, m;
    map<string, int>res;
    vector <string> v;
    string tmp;
    cin >> n >> m;

    for(int i = 0; i < n + m; i++){
        cin >> tmp;
        res[tmp]++;
        if(res[tmp] >= 2){
            v.push_back(tmp);
        }
    }
    sort(v.begin(), v.end());
    cout << v.size() << endl;
    for(int i = 0; i< v.size(); i++){
        cout << v[i] << endl;
    }
}