#include <stdio.h>

int main(){
    int num[10], temp[10], count = 0, tmp[42] = { 0, };

    for(int i=0 ; i<10 ; i++){
        scanf(" %d", &num[i]);
        tmp[num[i] % 42]++;
    }

    for(int i=0 ; i<42 ; i++){
        if(tmp[i] != 0)
            count++;
    }
    
    printf("%d", count);
}