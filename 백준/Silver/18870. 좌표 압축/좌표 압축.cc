#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int args ,char ** argv){
    
    int N;
    int X; 

    vector<int> v;

    cin >> N;

    while(N--){
        cin >> X;
        v.push_back(X);     
    }

    vector<int> v_before(v);

    sort(v.begin() , v.end());
    v.erase(unique(v.begin() , v.end()), v.end()); // 중복 제거

    vector<int> result;

    for(int i = 0 ; i < v_before.size() ; ++i){
            result.push_back(lower_bound(v.begin() , v.end() , v_before[i]) - v.begin()); 
    }

    for(auto x : result){
        cout << x << ' ';
    }

}
