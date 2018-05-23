#include "binarize.h"
#include <stdio.h>

void binarize_u(unsigned long long x) {
    // YOUR CODE HERE PLEASE
    short binaryNum[32];
    unsigned long long num = x;
    for (int i = 0; i < 32; i++) {
        binaryNum[i] = num & 1;
        num = num >> 1;
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 8; j++) {
            printf("%d", binaryNum[31 - (8 * i + j)]);
        }
        printf(" ");
    }
    printf("\n");
}

void binarize_s(signed long long y) {
    // YOUR CODE HERE PLEASE
    signed long long num = y;
    _Bool sign = y < 0;
    if (sign) {
        num = -num;
    }

    int binaryNum[32];
    for (int i = 0; i < 32; i++) {
        binaryNum[i] = num & 1;
        num = num >> 1;
    }

    if (sign) {
        binaryNum[31] = 1;
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 8; j++) {
            printf("%d", binaryNum[31 - (8 * i + j)]);
        }
        printf(" ");
    }
    printf("\n");

}

