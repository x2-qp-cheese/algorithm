#include <iostream>
using namespace std;

int count1 = 0;
int count2 = 0;
int arr[41] = {0,1,1,};

int fibo_by_recursive(int n){

    if(n == 1 || n == 2){
        count1++;
        return 1;
    }
    else 
        return fibo_by_recursive(n-1) +fibo_by_recursive(n-2);
}

int fibo_by_dynamic(int n){
    for(int i = 3; i <= n; i++){
        count2++;
        arr[i] = arr[i-1]+arr[i-2];
    }
    return arr[n];
}

int main(){
    int n = 0;
    cin >> n;

    int result1 = fibo_by_recursive(n);
    int result2 = fibo_by_dynamic(n);
    cout << count1 << " ";
    cout << count2;
    
}