#include <stdio.h>

char a[1001][1001];
int b[1001][1001];

int min(int x, int y, int z) {
    return (x < y) ? (x < z ? x : z) : (y < z ? y : z);
}

int main() {
    int n, m; 
    int max = 0;
    scanf("%d %d", &n, &m);

    for(int i = 0; i < n; i++) {
        scanf("%s", a[i]);
        for(int j = 0; j < m; j++) {
            b[i][j] = a[i][j] - '0';
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(i > 0 && j > 0 && b[i][j]) {
                if(b[i-1][j] && b[i][j-1] && b[i-1][j-1]) {
                    b[i][j] = min(b[i-1][j], b[i][j-1], b[i-1][j-1]) + 1;
                }
            }
            if(max < b[i][j]) {
                max = b[i][j];
            }
        }
    }
    
    printf("%d", max * max);

    return 0;
}
