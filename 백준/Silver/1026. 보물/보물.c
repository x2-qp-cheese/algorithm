#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int b[n];
    int sum = 0;
    int min, max;
    int minindex, maxindex;
    int len = n;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    while (len--)
    {
        min = 101;
        max = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < min)
            {
                min = a[i];
                minindex = i;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (b[i] > max)
            {
                max = b[i];
                maxindex = i;
            }
        }

        sum += max * min;
        a[minindex] = 101;
        b[maxindex] = -1;
    }

    printf("%d", sum);
}