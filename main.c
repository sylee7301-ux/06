#include <stdio.h>

// 함수 원형 선언
int get_integer(const char* message);
long long factorial(int n);
long long combination(int n, int r);

int main(void) {
    int n, r;

    // 1. n, r 입력 받기
    n = get_integer("n: ");
    r = get_integer("r: ");

    // 유효성 검사 (0 <= r <= n)
    if (n < 0 || r < 0 || r > n) {
        printf("wrong input. (must: n >= r >= 0)\n");
        return 1;
    }

    // 2. Combination 계산 및 출력
    long long result = combination(n, r);
    printf("C(%d, %d) = %lld\n", n, r, result);

    return 0;
}

// 사용자로부터 정수를 입력받는 함수
int get_integer(const char* message) {
    int value;
    printf("%s", message);
    scanf("%d", &value);
    return value;
}

// n! (팩토리얼)을 계산하는 함수
long long factorial(int n) {
    long long res = 1;
    for (int i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}

// 조합 공식 계산 함수
long long combination(int n, int r) {
    return factorial(n) / (factorial(n - r) * factorial(r));
}