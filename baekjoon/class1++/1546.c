#include <stdio.h>

int main(){
    double score[1001], avg = 0;
    int num, max = 0;
    
    scanf(" %d", &num);

    for(int i=0 ; i<num ; i++){
        scanf(" %lf", &score[i]);
        if(max < score[i]) max = score[i];
    }

    for(int i=0 ; i<num ; i++){
        score[i] = score[i] / (float)max * 100;
        avg += score[i];
    }

    printf("%10f\n\n", avg / num);
}