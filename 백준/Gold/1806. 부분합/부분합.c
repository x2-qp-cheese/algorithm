#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n];

    int s = 0;
    int l = 0;
    int len = 0;
    int minlen = n + 1;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sum = arr[0];
    while (1)
    {
        if (l == n - 1)
        {
            break;
        }
        if (sum >= m)
        {
            len = l - s + 1;
            sum -= arr[s++];
            if (len < minlen)
                minlen = len;
        }
        else
        {
            sum += arr[++l];
        }
        // printf("sum : %d\n", sum);
    }
    while (s <= l)
    {
        if (sum >= m)
        {
            len = l - s + 1;
            if (len < minlen)
                minlen = len;
        }
        sum -= arr[s++];
    }
    if (minlen != n + 1)
        printf("%d", minlen);
    else
        printf("0");
}