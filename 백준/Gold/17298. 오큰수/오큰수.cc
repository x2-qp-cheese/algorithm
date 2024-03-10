#include <iostream>
#include <stack>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    stack<pair<int,int> > s;

    int n;
    int num;

    cin >> n;

    int result[n];

    for(int i = 0; i < n; i++){
        cin >> num;

        while(!s.empty() && s.top().second < num){
            result[s.top().first] = num;
            s.pop();
        }

        s.push(pair<int,int>(i,num));
    }

    while(!s.empty()){
        result[s.top().first] = -1;
        s.pop();
    }

    for(int k = 0; k < n; k++){
        cout << result[k] << " ";
    }

    return 0;
}
