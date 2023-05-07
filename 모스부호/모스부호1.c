#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
// 변경

char* solution(const char* letter) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(1000 + 1);
    char* oneChar;

    const char* morse[] = { ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.." };

    int cCount = 0;
    oneChar = strtok(letter, " ");

    while (oneChar) {
        
        for (int i = 0; i < 26; i++) {
            if (!strcmp(morse[i], oneChar)) answer[cCount++] = 'a' + (char)i;
        }
        oneChar = strtok(NULL, " ");
    }
    answer[cCount] = '\0';

    return answer;
}

int main(void) {
    const char mStr1[] = ".... . .-.. .-.. ---";
    const char mStr2[] = ".--. -.-- - .... --- -.";

    printf("%s\n\n", solution(mStr1));
    printf("%s\n\n", solution(mStr2));

    return 0;
}
