#include <iostream>
using namespace std;

int main(){
    int a, b, c, d, e, f;
    int result_x, result_y;
    int check = 0;
    cin >> a >> b >> c >> d >> e >> f;
    
    for (result_x = -999; result_x <= 999; result_x++){
        for(result_y = -999; result_y <= 999; result_y++){
            if ((a*result_x + b*result_y == c) && (d*result_x + e*result_y == f)){
                check = 1;
                break;
            }
        }
        if(check == 1)
            break;
    }
    cout << result_x << " " << result_y;

}