#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* t, const char* p) {
    int answer = 0;
    int len_p=strlen(p);
    int len=strlen(t);
    char * number=(char *)malloc(sizeof(char)*10000);
    for(int i=0;i<=(len-len_p);i++){
        for(int j=i;j<i+len_p;j++){
        number[j-i]=t[j];
        number[i+len_p]='\0';
            }
        if(atoll(number)<=atoll(p)) answer++;
    }
    return answer;
}