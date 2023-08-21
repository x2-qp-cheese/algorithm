#include <iostream>
using namespace std;

int main() {
    int n;
    int start = 666;
    int count;
    cin >> n;

    while (n > 0) {
        count = 0;
        int temp = start;
        
        while (temp > 0) {
            if (temp % 10 == 6) {
                count++;
                if (count == 3) {
                    n--;
                    break;
                }
            } 
            else {
                count = 0;
            }
            temp /= 10;
        }
        start++;
    }

    cout << start - 1;
    
    return 0;
}
