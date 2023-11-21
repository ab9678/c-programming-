#include <stdio.h>
#include <string.h>

int main() {
    char name[100], operation;
    
    printf("Enter your name: \n");
    gets(name);
    puts(name);

    while (1) { // Infinite loop
        printf("Do you want to change a letter? (y/n)\n");
        scanf(" %c", &operation); 

        if (operation == 'y' || operation == 'Y') {
            int position;
            char letter_to_be_changed, new_letter;

            printf("Which letter do you want to change? ");
            scanf(" %c", &letter_to_be_changed);

            printf("Position? ");
            scanf("%d", &position);  // Use %d to read an integer for the position.

            printf("New Letter? ");
            scanf(" %c", &new_letter);

            if (position >= 0 && position < strlen(name)) {
                name[position] = new_letter;
                printf("Updated name: %s\n", name);
                break; // Exit the loop if the user entered 'y' and successfully made a change.
            } else {
                printf("Invalid position.\n");
            }
        } else if (operation == 'n' || operation == 'N') {
            printf("Your name as noted is: %s\n", name);
            break; // Exit the loop if the user entered 'n'.
        } else {
            printf("Invalid input. Please enter 'n' or 'y'.\n");
        }
    }

    return 0;
}
