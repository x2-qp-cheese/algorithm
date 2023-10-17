#include <stdio.h>

int main()
{
    int f = 0;
    scanf("%d", &f);
    while (f--)
    {
        int n = 0;
        scanf("%d", &n);
        int arr[n];
        int res[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        res[0] = arr[0];
        int max = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (res[i - 1] + arr[i] > arr[i])
                res[i] = res[i - 1] + arr[i];

            else
                res[i] = arr[i];
            if (max < res[i])
                max = res[i];
        }
        printf("%d\n", max);
    }
}