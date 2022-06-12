#include <stdio.h>

int main(){
    int num[5], value = 0;

    for(int i=0 ; i<5 ; i++)
        scanf(" %d", &num[i]);

    for(int i=0 ; i<5 ; i++){
        value += num[i] * num[i];
    }

    printf("%d", value % 10);
}