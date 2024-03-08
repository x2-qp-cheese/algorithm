#include <iostream>

using namespace std;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t, k, n;
    cin >> t;

    int arr[15][15] = {0,};

    for(int i = 1; i < 15; i++){
        arr[0][i] = i;
    }

    for(int i = 0; i  < t; i++){
        cin >> k >> n;
        for(int j = 1; j<=k; j++){
            for(int l = 1; l <=n; l++){
                if(!arr[j][l]){
                    arr[j][l] = arr[j-1][l] + arr[j][l-1];
                }
            }
        }
        cout << arr[k][n] << endl;    
    }
}