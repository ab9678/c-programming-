#include <stdio.h>

int factorial(int a) {
    if (a == 1) {
        return 1;
    } else {
        return a * factorial(a - 1);
    }
}

int main() {
    int a, num;

    printf("Enter the number till when you want to add the numbers \n");
    scanf("%d", &a);

    num = factorial(a);

    printf("%d", num);

    
}
