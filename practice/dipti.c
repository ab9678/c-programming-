#include<stdio.h>

int fibbo(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibbo(n - 1) + fibbo(n - 2);
}

int main() {
    int result;
    int n;
    printf("Enter the number of Fibonacci terms you want: ");
    scanf("%d", &n);
    printf("The required Fibonacci terms are: ");
    for (int i = 0; i < n; i++) {
        result = fibbo(i);
    }
    printf("%d",result);
    return 0;
}