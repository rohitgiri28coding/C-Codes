// Check if the K-th Bit is Set

#include <stdio.h>

void checkKSetBits(int num, int k) {
    if (num & (1 << k)) {
        printf("The %d-th bit is set.\n", k);
    } else {
        printf("The %d-th bit is not set.\n", k);
    }
}

int main() {
    int n, k;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter k-th bit to check: ");
    scanf("%d", &k);
    checkKSetBits(n, k);
    return 0;
}