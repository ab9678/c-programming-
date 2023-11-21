#include<stdio.h>

struct student {
    int roll;
    char name[20];
    int marks[2];
    int avg; // Added a field to store the average
};

int main() {
    int i, j, sum;
    struct student s[3];

    printf("Enter the details\n");
    for (i = 0; i < 3; i++) {
        printf("Enter student's roll\n");
        scanf("%d", &s[i].roll);
        printf("Enter student's name\n");
        scanf("%s", s[i].name);

        sum = 0; // Initialize sum for each student

        for (j = 0; j < 2; j++) {
            printf("Enter %d's student's marks in his %d sessional\n", i + 1, j + 1);
            scanf("%d", &s[i].marks[j]);
            sum += s[i].marks[j];
        }

        s[i].avg = sum / 2; // Calculate average after entering both marks
    }

    printf("The details of 3 students are\n");
    printf("roll\tname\taverage\n");
    for (i = 0; i < 3; i++) {
        printf("%d\t%s\t%d\t%d\n", s[i].roll, s[i].name, s[i].avg);
    }

}
