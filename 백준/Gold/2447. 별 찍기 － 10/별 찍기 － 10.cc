#include <iostream>
using namespace std;

char color(int n, int row, int col){
    char tmp;
    if(n == 1)
        tmp = '*';
    else if ((row%n >= n/3 && row%n < 2*n/3) && (col%n >= n/3 && col%n < 2*n/3)){
        tmp = ' ';
    }
    else
        tmp = color(n/3, row%n, col%n);

    return tmp;
}

int main(){
    int n = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << color(n,i,j);
        }
        cout << endl;
    }
}