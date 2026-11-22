#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct S {
    int k, e, m;
};

int main(void) {
    struct S a[2] = {{80, 90, 85}, {70, 75, 95}};
    FILE *p = fopen("my.bin", "wb");

    if (p == NULL) {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    if (fwrite(a, sizeof(struct S), 2, p) != 2) {
        printf("파일 저장에 실패했습니다.\n");
        fclose(p);
        return 1;
    }
    if (fclose(p) != 0) {
        printf("파일 닫기에 실패했습니다.\n");
        return 1;
    }
    printf("my.bin 저장 완료\n");
    return 0;
}
