#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[n];
    int sum = 0;
    int tmp;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int l_max = arr[0];
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > l_max + arr[i])
            l_max = arr[i];
        else
            l_max = l_max + arr[i];
        if (l_max > max)
            max = l_max;
    }
    printf("%d", max);
}