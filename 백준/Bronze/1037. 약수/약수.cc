#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n;
    int num;
    int result;
    vector<int> a;
    cin >> n;
    

    for(int i = 0; i<n; i++){
        cin >> num;
        a.push_back(num);
    }
    sort(a.begin(), a.end());
    result = a[0]*a[n-1];
    cout << result;   
}