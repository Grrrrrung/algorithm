#include <stdio.h>

int main(){
    int num[2], tmp[2], max = 0;

    scanf(" %d %d", &num[0], &num[1]);

    for(int i=0 ; i<2 ; i++)
        tmp[i] = (num[i] % 10)*100 + ((num[i] % 100) / 10)*10 + num[i] / 100;

    max = tmp[0];
    if(tmp[0] < tmp[1] )
        max = tmp[1];

    printf("%d", max);
}