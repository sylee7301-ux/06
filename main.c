#include <stdio.h>

void print_star(void) {
    int i;
    for (i = 0; i < 10; i++) {
        printf("*");
    }
    printf("\n"); // 줄바꿈을 추가하면 확인하기 좋습니다.
}

int main(void) {
    print_star();
    print_star();
    print_star();
    return 0;
}