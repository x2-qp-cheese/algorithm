#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int res[n];
    int tmpmax;
    int count;
    int max = 1;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    res[0] = 1;

    for (int i = 1; i < n; i++)
    {
        count = 0;
        tmpmax = 1;
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] > arr[i])
            {
                count = res[j] + 1;
            }

            if (tmpmax < count)
                tmpmax = count;
        }
        if (max < tmpmax)
            max = tmpmax;
        res[i] = tmpmax;
    }

    printf("%d", max);
}