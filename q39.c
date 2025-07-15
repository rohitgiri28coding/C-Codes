// Count Set Bits in an Integer

#include <stdio.h>

int countSetBits(int num) {
    int count = 0;
    while (num) {
        count += num & 1;   // Check last bit
        num >>= 1;          // Shift right
    }
    return count;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Set bits: %d\n", countSetBits(n));
    return 0;
}