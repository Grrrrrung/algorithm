#include <stdio.h>

int main(){
    int num;

    scanf(" %d", &num);

    for(int i=0 ; i<num ; i++){
        for(int j=num-1-i ; j>0 ; j--)
            printf(" ");
        for(int k=0 ; k<i+1 ; k++)
            printf("*");
        printf("\n");
    }
}