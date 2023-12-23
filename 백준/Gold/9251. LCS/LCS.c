#include <stdio.h>
#include <string.h>

char a[1001];
char b[1001];
int c[1002][1002];

int main(){
    scanf("%s %s", a, b);
    int s = strlen(a);
    int i, j;
    i = 1;
    while(i <= strlen(a)){
        j = 1;
        while(j <=strlen(b)){
            if(b[j-1] == a[i-1])
                c[i][j] = c[i-1][j-1]+1;
            else{
                if(c[i-1][j] > c[i][j-1])
                    c[i][j] = c[i-1][j];
                else
                    c[i][j] = c[i][j-1];
            }
            j++;
        }
        i++;
    }
    printf("%d", c[i-1][j-1]);
}