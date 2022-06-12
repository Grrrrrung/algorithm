#include <stdio.h>

int main(){
    int num, min = 1111111, max = -1111111;
    int arr[1000000];

    scanf(" %d", &num);

    for(int i=0 ; i<num ; i++)
        scanf(" %d", &arr[i]);

    for(int i=0 ; i<num ; i++){
        if(max < arr[i])
            max = arr[i];
        if(min > arr[i])
            min = arr[i];
    }

    printf("%d %d", min, max);
}