#include <iostream>
#include <string>
using namespace std;

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n = 0;
    int tmp;
    int queue[2000001];
    int front = 0;
    int back = -1;
    string order;

    cin >> n;
    while (n--)
    {
        cin >> order;
        if (order == "push"){
            cin >> tmp;
            queue[++back] = tmp;
        }
        else if(order == "pop"){
            if(front > back)
                cout << "-1" << "\n";
            else
                cout << queue[front++] << "\n";
        }
        else if(order == "size"){
            if(front > back)
                cout << 0 << "\n";
            else
                cout << (back-front+1) << "\n";
        }
        else if(order == "empty"){
            if(front > back)
                cout << "1" << "\n";
            else 
                cout << "0" << "\n";
        }
        else if(order == "front"){
            if(front > back)
                cout << "-1" << "\n";
            else
                cout << queue[front] << "\n";
        }
        else if(order == "back"){
            if(front > back)
                cout << "-1" << "\n";
            else
                cout << queue[back] << "\n";
        }
    }
}