#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    int sum = 0;
    vector<int> v;

    for(int i = 0; i < 9; i++){
        cin >> n;
        v.push_back(n);
        sum+=n;
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < 8; i++){
        for(int j = i+1; j < 9; j++){
            if(v[i]+v[j] ==  sum-100){
                v.erase(v.begin() + j);
                v.erase(v.begin() + i);
                break;
            }
        }
        if (v.size() < 9)
            break;
    }

    for(int i = 0; i < 7; i++){
        cout << v[i] << endl;
    }

    return 0;
}