#include <iostream>
#include <vector>

using namespace std;

int main(){

    int max = 0;
    int num = 0;
    cin >> num;
    vector<int> v(9,0);

    while(num){
        int tmp = num%10;
        if(tmp == 6 ||tmp == 9){
            v[6]++;
            if(v[6]%2){
                if(max < (v[6]/2 + 1))
                    max = v[6]/2 + 1;
            }
            else{
                if(max < v[6]/2)
                    max = v[6]/2;
            }
        }
        else{
            v[tmp]++;
            if(max < v[tmp])
                max = v[tmp];
        }
        
        num/=10;
    }
    cout << max;
    return 0;
}