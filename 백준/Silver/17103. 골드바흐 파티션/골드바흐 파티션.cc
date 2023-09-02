#include <iostream>
using namespace std;
#define max 1000000


int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int arr[max+1];
    arr[1]=0;

    for(int i = 2; i<= max; i++)
        arr[i] = i;
    for(int i = 2; i*i <= max; i++){
        if(arr[i] == 0)
            continue;
        for(int j = i+i; j <= max; j+=i)
            arr[j] = 0;
    }

    // for(int i = 2; i<=max; i++)
    //     if(arr[i])
    //         cout << i << endl;

    int n;
    int count = 0;
    int tmp;
    cin >> n;

    while(n--){
        count = 0;
        cin >> tmp;
        for(int i = 2; i < tmp; i++){
            if(arr[i] + arr[tmp-i] == tmp){
                count++;
                if(i == tmp-i)
                    count++;
            }
        }
        cout << count/2 << endl;
    }
    
}