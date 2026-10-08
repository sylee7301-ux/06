#include <stdio.h>

void func(void) {
    int x;
    printf("func x is at %p\n", (void*)&x);
}

int main(void) {
    int x;
    printf("main x is at %p\n", (void*)&x);
    func();
    func(); // 2번 호출하여 재할당 시 주소 관찰
    return 0;
}