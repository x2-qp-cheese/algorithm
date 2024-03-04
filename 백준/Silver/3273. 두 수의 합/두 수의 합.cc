//두 수의 합
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n, a, x;
    int count = 0;
    vector<int> v;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    a = 0;
    n--;
    
    cin >> x;

    while(a < n){
        if(v[a] + v[n] == x){
            count++;
            a++;
        }
        else if(v[a] + v[n] < x)
            a++;
        else
            n--;
    }

    cout << count;

    return 0;
}