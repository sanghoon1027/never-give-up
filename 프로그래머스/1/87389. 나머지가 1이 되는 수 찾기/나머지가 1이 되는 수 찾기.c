#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    for(int i=2;i<n-1;i++){
        answer=(n%i);
        if(answer==1){
            return i;
        }
    }
}