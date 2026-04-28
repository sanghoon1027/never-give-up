#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int cnt=0;
    int temp=n;
    while(temp!=0){
        temp/=10;
        cnt++;
    }
    for(int i=0;i<cnt;i++){
        answer+=(n%10);
        n/=10;
    }
    return answer;
}