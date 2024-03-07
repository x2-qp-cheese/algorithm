#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    vector<int> v;

    int n, tmp, rd;
    int sum = 0;
    cin >> n;

    if(n == 0){
        cout << 0;
        return 0;
    }

    rd = round((double)n/100*15);

    for(int i = 0; i < n; i++){
        cin >> tmp;
        v.push_back(tmp);
        sum += tmp;
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < rd; i++){
        sum-=v[i];
        sum-=v[n-i-1];
    } 

    cout << round(double(sum)/(n-2*rd));
    return 0;
}