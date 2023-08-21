#include <iostream>
using namespace std;

int main(){
    int arr[5];
    int add = 0;
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
        add+=arr[i];
    }
    int min = arr[0];
    int temp;
    for(int i = 0; i < 3; i++){
        temp = 0;
        min  = arr[i];
        for(int j = i+1; j < 5; j++){
            if(min > arr[j]){
                temp = j;
                min = arr[j];
            }
        }
        arr[temp] = arr[i];
        arr[i] = min;
    } 
    cout << add/5 << endl; 
    cout << min;
}