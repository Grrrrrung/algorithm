#include <stdio.h>

int main(){
    int num[9], flag, max = 0;

    for(int i=0 ; i<9 ; i++){
        scanf(" %d", &num[i]);
        if(max < num[i]){
            max = num[i];
            flag = i;
        }
    }

    printf("%d\n%d", max, flag+1);
}