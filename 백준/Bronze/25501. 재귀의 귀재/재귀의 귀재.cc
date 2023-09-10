#include <iostream>
#include <cstring>
using namespace std;

int count=0;

int recursion(const char *s, int l, int r){
    ::count+=1;
    if(l >= r) 
        return 1;
    else if(s[l] != s[r]) 
        return 0;
    else 
        return recursion(s, l+1, r-1);
}

int isPalindrome(const char *s){
    return 
        recursion(s, 0, strlen(s)-1);
}

int main(){
    int n = 0;
    char tmp[1001];
    cin >> n;
    while(n--){
        ::count = 0;
        cin >> tmp;
        cout << isPalindrome(tmp) << " " << ::count << endl;
    }   
}