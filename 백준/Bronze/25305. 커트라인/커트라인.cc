#include <iostream>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int arr[n];
    int temp;
    int max;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    for(int i = 0; i < n; i++){
        max = arr[i];
        temp = i;
        for(int j = i; j < n; j++){
            if(max < arr[j]){
                temp = j;
                max = arr[j];
            }
        }
        arr[temp] = arr[i];
        arr[i] = max;
    }
    cout << arr[k-1];
}