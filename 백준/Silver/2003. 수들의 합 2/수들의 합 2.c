#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n];
    int count = 0;
    int start = 0;
    int last = 0;
    int sum;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sum = arr[0];
    while (last < n)
    {
        if (sum < m)
        {
            sum += arr[++last];
        }
        else if (sum > m)
        {
            sum -= arr[start++];
        }
        else
        {
            count++;
            if (last == n - 1)
            {
                break;
            }
            sum += arr[++last];
        }
    }
    printf("%d", count);
}