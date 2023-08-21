#include <iostream>
using namespace std;

int main(){
    int n = 0;
    cin >> n;
    int arr[n];
    int temp = 0;
    int min = 0;
    int i, j;


    for(i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(i = 0; i < n-1; i++){
        min = arr[i];
        temp = i;
        for(j = i+1; j < n; j++){
            if(arr[j] < min){
                min  = arr[j];
                temp = j;
            }
        }
        arr[temp] = arr[i];
        arr[i] = min;
    }

    for(i = 0; i < n; i++){
        cout << arr[i] << endl;
    }
}