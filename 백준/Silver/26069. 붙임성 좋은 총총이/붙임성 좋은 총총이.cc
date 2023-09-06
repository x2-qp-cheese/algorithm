#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    string first;
    string second;
    map<string, int> a;
    int n;
    cin >> n;
    a["ChongChong"] = 1;
    int count = 1;

    while(n--){
        cin >> first >> second;
        if(first == "ChongChong" || second == "ChongChong"){
            if(!(a[first] == 1 && a[second] == 1)){
                a[first] = 1;
                a[second] = 1;       
                count++;
            }
        }

        if(a[first] == 1 || a[second] == 1){
            if(!(a[first] == 1 && a[second] == 1)){
                a[first] = 1;
                a[second] = 1;
                count++;
            }
            
        }
    }
    cout << count;
}