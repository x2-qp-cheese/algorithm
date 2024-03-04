#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> m(7,0);
    vector<int> f(7,0);
    int count = 0;
    int n, k;
    cin >> n >> k;

    int sex, grade;
    for(int i = 0; i < n; i++){
        cin >> sex >> grade;

        if(sex){
            m[grade]++;
        }
        else{
            f[grade]++;
        }
    }

    for(int i = 1; i <=6; i++){
        if(m[i]%k)
            count+=(m[i]/k+1);
        else
            count+=m[i]/k;
        if(f[i]%k)
            count+=(f[i]/k+1);
        else
            count+=f[i]/k;
    }

    cout << count;
}