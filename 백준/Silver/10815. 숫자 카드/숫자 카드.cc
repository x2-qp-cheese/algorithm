#include <iostream>
#include <map>
using namespace std;

int main(){
    map <int, int> res;
    int n, m;
    int num;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &num);
        res[num] = 1;
    }
    scanf("%d", &m);
    for(int i = 0; i < m; i++){
        scanf("%d", &num);
        if (res[num]){
            cout << "1 ";
        }
        else{
            cout << "0 ";
        }
    }
}