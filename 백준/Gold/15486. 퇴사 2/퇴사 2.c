#include <stdio.h>
#include <string.h>

int days[1500003];
int cost[1500003];

int main(){
    int n;
    scanf("%d", &n);
    int max[n+2];
    max[0] = 0;
    max[n+1] = 0;
    for(int i = 1; i <= n; i++){
        max[i] = 0;
        scanf("%d %d", &days[i], &cost[i]);
    }

    for(int i = n; i > 0; i--){
        if(i + (days[i]-1) > n)
            max[i] = max[i+1];
        else{
            if(cost[i] + max[i+days[i]] > max[i+1]){
                max[i] = cost[i] + max[i+days[i]];
            }
            else{
                max[i] = max[i+1];
            }
        }
    }
    printf("%d", max[1]);    
}