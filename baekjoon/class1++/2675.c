#include <stdio.h>
#include <string.h>

int main(){
    int num, count;
    char str[20] = { 0, };

    scanf(" %d", &num);

    for(int i=0 ; i<num ; i++){
        scanf(" %d", &count);
        scanf(" %[^\n]s", str);

        for(int j=0 ; j<strlen(str) ; j++)
            for(int k=0 ; k<count ; k++)
                printf("%c", str[j]);
        printf("\n");
    }
}