/*
Q-COMPUTE SUM OF INDIVISUAL DIGITS OF A GIVEN NUMBER USING FUNCTION.
ALGORITHM:--



**/





#include <stdio.h>

// Function to compute the sum of individual digits
int sumOfDigits(int number) {
    int sum = 0;

    while (number != 0) {
        sum += number % 10; // Add the last digit to the sum
        number /= 10;       // Remove the last digit from the number
    }

    return sum;
}

int main() {
    int num;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Compute and display the sum of individual digits using the function
    printf("Sum of digits: %d\n", sumOfDigits(num));

    
}

