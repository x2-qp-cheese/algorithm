#include <stdio.h>

int check(int n)
{
    if (n < 4)
        return 0;
    return n / 5 + check(n / 5);
}
int main()
{
    int n = 0;
    scanf("%d", &n);
    int a = check(n);
    printf("%d", a);
}