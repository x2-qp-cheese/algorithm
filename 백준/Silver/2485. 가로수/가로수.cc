#include <iostream>
using namespace std;

int gcd(int a, int b){
    int r = a%b;
    if(r==0)
        return b;
    else
        return gcd(b, r);
}

int main(){
    int n;
    cin >> n;
    int st = 0;
    int tmp;
    int count = 0;
    int* arr = (int*)malloc(sizeof(int)*n);
    int j = 1;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    st = arr[1]-arr[0];
    for(int i = 1; i < n-1; i++){
        tmp = arr[i+1]-arr[i];
        if(st > tmp)
            st = gcd(st, tmp);
        else 
            st = gcd(tmp, st);
    }


    for(int i = arr[0]+st; i < arr[n-1]; i+=st){
        if(arr[j]!=i){
            count++;
        }
        else{
            j++;
        }
    }
    cout << count;
}