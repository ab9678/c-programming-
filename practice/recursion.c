#include <stdio.h>

int addition(int a) {
    if (a == 0) {
        return 0;
    } else {
        return a + addition(a - 1);
    }
}

int main() {
    int a, num;

    printf("Enter the number till when you want to add the numbers \n");
    scanf("%d", &a);

    num = addition(a);

    printf("%d", num);

    return 0;
}
