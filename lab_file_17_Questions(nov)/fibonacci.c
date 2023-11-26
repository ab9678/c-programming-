#include <stdio.h>

void generateFibonacci(int n) {
    int first = 0, second = 1, next, i;

    printf("Fibonacci Series: %d %d ", first, second);

    for (i = 2; i < n; i++) {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }

    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Number of terms should be non-negative.\n");
    } else {
        generateFibonacci(n);
    }

    return 0;
}
