#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main(){
    int n = 0;
    int max = 0;
    cin >> n;
    vector<int> v;
    map <int, int> m;

    int tmp;

    double sansul; //완
    int middle; //완
    vector<int> most;
    int range; //완

    for(int i = 0; i <  n; i++){
        cin >> tmp;
        sansul+=tmp;
        v.push_back(tmp);
        m[tmp]++;
        if(m[tmp] > max){
            max = m[tmp];
        }
    }

    vector<int> check(v.size());

    sort(v.begin(), v.end());

    tmp = 0;
    for(const auto &pair :m){
        if(pair.second == max){
            most.push_back(pair.first);
            tmp++;
        }
    }

    sort(most.begin(), most.end());
    sansul = round(sansul/n);
    middle = v[n/2];
    range = v[n-1]-v[0];

    //result
    if(sansul == -0){
        cout << "0" << endl;
    }
    else{
        cout << sansul << endl;
    }
    cout << middle << endl;
    if(tmp > 1){
        cout << most[1]<< endl;
    }
    else{
        cout << most[0]<< endl;
    }
    cout << range << endl;

}