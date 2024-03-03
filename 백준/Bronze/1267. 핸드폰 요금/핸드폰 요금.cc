#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, tmp;
    int y = 0;
    int m = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> tmp;
        y += (tmp/30+1)*10;
        m += (tmp/60+1)*15;
    }

    if(y < m)
        cout << "Y " << y;
    else if(y > m)
        cout << "M " << m;
    else
        cout << "Y M " << y;

    return 0;
}