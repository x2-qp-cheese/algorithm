#include <stdio.h>
int main()
{
    int sizea, sizeb;
    scanf("%d %d", &sizea, &sizeb);
    int a[sizea];
    int b[sizeb];
    int sa = 0;
    int sb = 0;
    for (int i = 0; i < sizea; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < sizeb; i++)
    {
        scanf("%d", &b[i]);
    }

    while (1)
    {
        if (a[sa] < b[sb])
            printf("%d ", a[sa++]);
        else
            printf("%d ", b[sb++]);

        if (sa == sizea)
        {
            for (int i = sb; i < sizeb; i++)
                printf("%d ", b[i]);
            break;
        }
        else if (sb == sizeb)
        {
            for (int i = sa; i < sizea; i++)
                printf("%d ", a[i]);
            break;
        }
    }
}