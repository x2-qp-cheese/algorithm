#include <iostream>
#include <map>
using namespace std;

int main(){
    int n, m;
    int temp;
    map <int, bool> res;

    cin >> n >> m;
    for(int i = 0; i <  n+m; i++){
        cin >> temp;
        if(res[temp] == true){
            res.erase(temp);
        }
        else{
            res[temp] = true;
        }
    }

    cout << res.size();
}