#include <stdio.h>
#include <string.h>

char word[1000001];
int count[26];

int main(){
    
    int flag, max = 0, len;

    scanf(" %s", word);
    len = strlen(word);

    for(int i=0 ; i<len ; i++){
        if(word[i]>96) count[word[i]-97]++;
        else count[word[i]-65]++;
    }

    for(int i=0 ; i<26 ; i++){
        if(count[i] == max) flag = '?';
        else if(count[i] > max ){
            max = count[i];
            flag = i + 65;
        }
    }

    printf("%c", flag);
}