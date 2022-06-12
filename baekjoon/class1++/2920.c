#include <stdio.h>

int main(){
    int input[8], cnt1 = 0, cnt2 = 0;

    for(int i=0 ; i<8 ; i++)
        scanf(" %d", &input[i]);

    for(int i=0 ; i<8 ; i++){
        if(input[i] == i+1)
            cnt1++;
        else if(input[7-i] == i+1)
            cnt2++;
    }

    if(cnt1 == 8)
        printf("ascending");
    else if(cnt2 == 8)
        printf("descending");
    else
        printf("mixed");
}