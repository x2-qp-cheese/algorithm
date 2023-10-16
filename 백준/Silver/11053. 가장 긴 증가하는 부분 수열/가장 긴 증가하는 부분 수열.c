#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int res[n];
    int len = 0;
    int count = 1;
    int max = 1;
    int tmpmax = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    res[n - 1] = 1;

    for (int i = n - 1; i >= 0; i--)
    {
        tmpmax = 1;
        count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                count = res[j] + 1;
            }
            if (tmpmax < count)
            {
                tmpmax = count;
            }
        }
        if (tmpmax > max)
        {
            max = tmpmax;
        }
        res[i] = tmpmax;
    }

    printf("%d", max);
}