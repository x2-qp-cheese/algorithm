#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 0;
    scanf("%d", &n);

    double *num = (double *)malloc(sizeof(double) * n);
    double *res = (double *)malloc(sizeof(double) * n);
    double localmax;
    double max;
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &num[i]);
    }
    localmax = num[0];
    max = num[0];

    for (int i = 1; i < n; i++)
    {
        if (localmax * num[i] > num[i])
            localmax = localmax * num[i];
        else
            localmax = num[i];
        if (max < localmax)
            max = localmax;
    }

    printf("%.3lf", max);
}