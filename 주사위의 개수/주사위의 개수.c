#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// box_len은 배열 box의 길이입니다.
int solution(int box[], size_t box_len, int n) {
    int answer = 1;
        
    for(int i=0; i < box_len; i++) {
        answer *= box[i] / n;
    }
        
    return answer;
}

int main(void) {
    const int box1[] = { 1, 1, 1 };
    const int box2[] = { 10, 10, 10 };

    printf("%d\n\n", solution((int *)box1, 3, 1));
    printf("%d\n\n", solution((int *)box2, 3, 2));

    return 0;
}