// 2024 q97

#include<iostream>

int f(int &x, int c) {
    c = c - 1;
    if (c == 0) return 1;
    x = x + 1;
    return f(x, c) * x;
}

int main(){
    int num1 = 5;
    printf("%d", f(num1, num1));
    return 1;
}


// OUTPUT: 6561