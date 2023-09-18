#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int n;
    cin >> n;
    n--;
    char tmp[51];
    char res[51];
    
    cin >> res;
    int length = strlen(res);
    while(n--){
        cin >> tmp;
        for(int i = 0; i < length; i++){
            if(tmp[i] != res[i]){
                res[i] = '?';
            }
        }
    }

    cout << res;
}