#include <stdio.h>

int count[10];

int main(){
    int num[3], result = 1, tmp;
    
    for(int i=0 ; i<3 ; i++){
        scanf(" %d", &num[i]);
        result *= num[i];
    }

    for(int i=result ; i>0 ; i/=10)
		count[i % 10]++;

    for(int i=0 ; i<10 ; i++)
        printf("%d\n", count[i]);
}