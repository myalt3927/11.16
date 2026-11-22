#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    char str[100];

    printf("문장 입력: ");
    if (scanf("%99[^\n]", str) != 1) {
        return 1;
    }

    for (int i = (int)strlen(str) - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}
