#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 1;
    int facto = 1;

    for ( ; answer <= n; answer++) {
        facto *= answer;
        if (facto > n) break;
    }
    
    return --answer;
}

int main(void) {
    printf("%d\n", solution(1));
    printf("%d\n", solution(2));
    printf("%d\n", solution(3628800));
    printf("%d\n", solution(50));

    return 0;
}