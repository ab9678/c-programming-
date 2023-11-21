#include <stdio.h>

int main() {
    int rowsize, columnsize;
    printf("Enter the number of rows: ");
    scanf("%d", &rowsize);
    printf("Enter the number of columns: ");
    scanf("%d", &columnsize);

    if (rowsize == columnsize) {
        int a[rowsize][columnsize], b[rowsize][columnsize], result;
        char operation, plus = '+', minus = '-';
        int i, j;

        printf("Enter elements of matrix A:\n");
        for (i = 0; i < rowsize; i++) {
            for (j = 0; j < columnsize; j++) {
                scanf("%d", &a[i][j]);
            }
        }

        printf("Enter elements of matrix B:\n");
        for (i = 0; i < rowsize; i++) {
            for (j = 0; j < columnsize; j++) {
                scanf("%d", &b[i][j]);
            }
        }

        printf("Operation? (+ for addition, - for subtraction): ");
        scanf(" %c", &operation);  // Note the space before %c to consume any extra newline character.

        if (operation == plus) {
            // Addition
            for (i = 0; i < rowsize; i++) {
                for (j = 0; j < columnsize; j++) {
                    result = a[i][j] + b[i][j];
                    printf("%d\t", result);
                }
                printf("\n");
            }
        } else if (operation == minus) {
            // Subtraction
            for (i = 0; i < rowsize; i++) {
                for (j = 0; j < columnsize; j++) {
                    result = a[i][j] - b[i][j];
                    printf("%d\t", result);
                }
                printf("\n");
            }
        } else {
            printf("Not a valid input!\n");
        }
    } else {
        printf("Since the row and column sizes are not equal in both matrices, no operations are possible.\nThank you!\n");
    }

    return 0;




    printf("size is %d and %d",rowsize,columnsize);

}










































































































































 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
