#include <iostream>
using namespace std;

int gcd(int a, int b){
    int r = a%b;
    if(r == 0)
        return b;
    else
        return gcd(b, r);
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    //최대공약수 

    int a1, a2;
    int b1, b2;
    int bunja;
    int bunmo;
    int tmp;
    cin >> a1 >> a2;
    cin >> b1 >> b2;

    bunja = a1*b2 + b1*a2;
    bunmo = a2*b2;
    if(bunja > bunmo)
        tmp = gcd(bunja, bunmo);
    else
        tmp = gcd(bunmo, bunja);

    bunja = bunja/tmp;
    bunmo = bunmo/tmp;

    cout << bunja << " " << bunmo << endl;
    

}