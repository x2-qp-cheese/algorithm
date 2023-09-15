#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main(){
    cin.tie(0);
    iostream::sync_with_stdio(0);
    int n = 0; 
    int input = 0;
    int tmp = 0;
    int num = 0;
    deque<int> arr;
    cin >> n;
    while(n--){
        cin >> input;

        if(input == 1){
            cin >> tmp;
            arr.push_front(tmp);
            num++;
        }

        else if(input == 2){
            cin >> tmp;
            arr.push_back(tmp);
            num++;
        }

        else if(input == 3){
            if(num == 0){
                cout << "-1\n";
            }
            else{
                cout << arr[0] << "\n";
                arr.pop_front();
                num--;
            }
        }

        else if(input == 4){
            if(num == 0){
                cout << "-1\n";
            }
            else{
                cout << arr[num-1] << "\n";
                arr.pop_back();
                num--;
            }
        }

        else if(input == 5){
            cout << num << "\n";
        }

        else if(input == 6){
            if(num == 0){
                cout << "1\n";
            }
            else{
                cout << "0\n";
            }
        }

        else if(input == 7){
            if(num == 0){
                cout << "-1\n";
            }
            else{
                cout << arr[0] << "\n";
            }
        }

        else if(input == 8){
            if(num == 0){
                cout << "-1\n";
            }
            else{
                cout << arr[num-1] << "\n";
            }
        }

    }
}