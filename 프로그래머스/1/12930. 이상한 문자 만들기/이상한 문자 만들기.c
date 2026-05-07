#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char* solution(const char* s) {
   int len=strlen(s);
    int flag=0;
    char* answer = (char*)malloc(len+1);
    strcpy(answer,s);
    for(int i=0;answer[i]!='\0';i++){
        if((answer[i]!=' ')&&flag%2==0) {
            answer[i]=toupper(answer[i]);
            
        }
        else if((answer[i]!=' ')&&flag%2!=0)
        {
            answer[i]=tolower(answer[i]);
        }
        flag++;
        if(answer[i]==' ') flag=0;
    }
    
    return answer;
}