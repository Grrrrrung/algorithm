#include <stdio.h>
#include <string.h>

int main(){
    char OX[80];
    int count, score, num;

    scanf(" %d", &num);

    for(int i=0 ; i<num ; i++){
        scanf(" %[^\n]s", OX);

        count = 0;
        score = 0;

        for(int j=0 ; j<strlen(OX) ; j++){
            if(OX[j] == 'O'){
                count++;
                score += count;
            }
            else if(OX[j] == 'X')
                count = 0;
        }
        printf("%d\n", score);
    }
}