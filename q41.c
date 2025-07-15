// Toggle a Specific Bit in an Integer

#include <stdio.h>

int main() {
    int num, k;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter bit position to toggle: ");
    scanf("%d", &k);

    int toggled = num ^ (1 << k);  // XOR toggles the bit

    printf("Result after toggling %d-th bit: %d\n", k, toggled);

    return 0;
}
