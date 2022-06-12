#include <stdio.h>
#include <string.h>

int main() {
    char str[1000001];
    int count=0;

    scanf("%[^\n]", str);

    if(strlen(str) == 1 && str[0] == ' '){
        printf("0");
        return 0;
    }
    
    for(int i=1 ; i<strlen(str)-1 ; i++)
        if(str[i] == ' ')
            count++;

    printf("%d", count+1);
}