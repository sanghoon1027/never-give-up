#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int* solution(int numbers[], size_t numbers_len) {
    int* answer = (int*)malloc(sizeof(int)*5000);
    int cp=0;
    int flag=0;
    int sum;
    int temp;
    for(int i=0;i<numbers_len-1;i++){
        for(int j=i+1;j<numbers_len;j++){
            sum=numbers[i]+numbers[j];
            flag=0;
            for(int k=0;k<cp;k++){
                if(sum==answer[k]) {
                    flag=1;
                    break;
                }
            }
            if(flag==0) {
                answer[cp]=sum;
                cp++;
                }
        }
    }
    
    for(int i=0;i<cp-1;i++){
        for(int j=i+1;j<cp;j++){
            if(answer[i]>answer[j]){
                temp=answer[j];
                answer[j]=answer[i];
                answer[i]=temp;
            }
        }
    }
    
    return answer;
}