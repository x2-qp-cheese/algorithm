#include <iostream>
#include <vector>

using namespace std;

int main(){
    int s, l;
    int tmp;
    vector<int> v(21);

    for(int i = 1; i <= 20; i++){
        v[i] = i;
    }

    for (int i = 0; i < 10; i++){
        cin >> s >> l;
        while(s < l){
            tmp = v[l];
            v[l] = v[s];
            v[s] = tmp;
            s++;
            l--;
        }
    }

    for(int i = 1; i <= 20; i++){
        cout << v[i] << " ";
    }

    return 0;
}
