#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return *(int *)b - *(int *)a  ;
}

int solution(int numbers[], size_t numbers_len) {
    qsort(numbers, numbers_len, sizeof(int), compare);
    return numbers[0] * numbers[1];
}


int main(void) {
    const int num1[] = { 1, 2, 3, 4, 5 };
    const int num2[] = { 0, 31, 24, 10, 1, 9 };

    printf("%d\n", solution((int *)num1, sizeof(num1)/sizeof(int)));
    printf("%d\n", solution((int *)num2, sizeof(num2)/sizeof(int)));

    return 0;
}

