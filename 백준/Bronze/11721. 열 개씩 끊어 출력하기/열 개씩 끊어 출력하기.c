#include <stdio.h>
#include <string.h>

int main(){
    char str[101];

    scanf("%s", str);
    for(int i = 0; i < strlen(str); i++){
        if(i%10 == 0 && i){
            printf("\n%c", str[i]);
        }
        else{
            printf("%c", str[i]);
        }
    }
}