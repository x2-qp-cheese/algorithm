//회전하는 큐
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    iostream::sync_with_stdio(0);
    cin.tie(NULL);

    int n,m;
    int num;
    cin >> n >> m;
    int start = n-1;
    int count = 0;
    int idx;

    vector<int> v;
    for(int i = 0; i < n; i++){
        v.push_back(n-i);
    }

    for(int i = 0; i < m; i++){
        cin >> num;
        if(v[start] == num){
            v.pop_back();
            start--;
        }
        else{
            for(int j = 0; j < start; j++){
                if(v[j] == num){
                    idx = j;
                    break;
                }
            }
            if(idx+1 < start-idx){
                while(v[start] != num){
                    rotate(v.begin(), v.begin()+1, v.end());
                    count++;
                }
                v.pop_back();
                start--;
            }
            else{
                while(v[start] != num){
                    rotate(v.begin(), v.end()-1, v.end());
                    count++;
                }
                v.pop_back();
                start--;
            }
        }
    }

    cout << count;

    return 0;
}
