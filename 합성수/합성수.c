#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// box_len은 배열 box의 길이입니다.
int solution(int n) {
    int answer = 0;

    for (int i = 1; i <= n; i++) {
        int flag = 0;        
        for (int j = 2; j < i; j++) {
            if(i % j == 0) {
                flag++;
                break;
            }
        }
        if(flag) answer++;
    }
    
    return answer;
}

int main(void) {

    printf("%d\n", solution(10));
    printf("%d\n", solution(15));

    return 0;
}