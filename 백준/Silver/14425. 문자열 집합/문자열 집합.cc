#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    int n,m;
    string tmp;
    int count = 0;
    map <string, int> res;
    scanf("%d %d", &n, &m);

    for(int i = 0; i < n; i++){
        cin>> tmp;
        res[tmp] = 1;
    }
    for(int j = 0; j < m; j++){
        cin >> tmp;
        if(res[tmp] == 1)
            count++;
    }
    cout << count;
}
