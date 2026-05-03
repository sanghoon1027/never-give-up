#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


char* solution(const char* phone_number) {
    char* answer = (char*)malloc(1);
    for(int i=0;i<21;i++){
        answer[i]=phone_number[i];
    }
    for(int i=strlen(answer)-5;i>=0;i--){
        answer[i]='*';
    }
    return answer;
}