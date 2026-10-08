#include <stdio.h>

// 1. 두 정수를 더하는 함수
int sumTwo(int a, int b) {
    return a + b;
}

// 2. 정수의 제곱을 계산하는 함수
int square(int n) {
    return n * n;
}

// 3. 두 정수 중 큰 수를 구하는 함수
int get_max(int x, int y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}

int main(void) {
    int a = 5, b = 10;
    
    printf("sumTwo(%d, %d) = %d\n", a, b, sumTwo(a, b));
    printf("square(%d) = %d\n", a, square(a));
    printf("get_max(%d, %d) = %d\n", a, b, get_max(a, b));

    return 0;
}