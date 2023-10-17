#include <stdio.h>

int main()
{
    int n;
    long long int fibo[100];
    fibo[0] = 0;
    fibo[1] = 1;
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    printf("%llu", fibo[n]);
}