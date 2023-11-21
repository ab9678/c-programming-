#include <stdio.h>

int main() {
    int n1, n5, max;

    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n5);

    // The maximum number between n1 and n5 is stored in max
    max = (n1 > n5) ? n1 : n5;

    while (1) {
        if ((max % n1 == 0) && (max % n5 == 0)) {
            printf("The LCM of %d and %d is %d.", n1, n5, max);
            break;
        }
        ++max;
    }

    return 0;
}
