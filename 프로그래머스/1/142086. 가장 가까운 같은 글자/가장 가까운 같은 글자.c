#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(const char* s) {
    int len=strlen(s);
    
    int* answer = (int*)malloc(sizeof(int)*len);
    for(int i=0;i<len;i++){
        answer[i]=-1;
    }
    for(int i=len-1;i>=0;i--){
        for(int j=i-1;j>=0;j--){
            if(s[i]==s[j]){
                answer[i]=i-j;
                break;
            }
        }
    }
    return answer;
}