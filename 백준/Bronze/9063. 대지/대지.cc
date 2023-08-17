#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x, y;
    int xmin=100000;
    int ymin=100000;
    int xmax=-100000;
    int ymax=-100000;
    for (int i = 0; i < n; i++){
        cin >> x >> y;
        if (x > xmax)
            xmax = x;
        if (y > ymax)
            ymax = y;
        if (x < xmin)
            xmin = x;
        if (y < ymin)
            ymin = y;
    }

    cout << (xmax-xmin)*(ymax-ymin);
}