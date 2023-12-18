// structure student 

#include <stdio.h>

struct student
{

    int rollNo;
    int marks;
    char name[20];


};



int main(){
int numOfStudents;

printf("Enter the Number of Students:\t");
scanf("%d",&numOfStudents);
struct student std[numOfStudents];

int i;

for(i=0;i<numOfStudents;i++){
    printf("Enter students roll number;\t");
    scanf(" %d", &std[i].rollNo);

    printf("\nEnter marks:\t");
    scanf("%d", &std[i].marks);

    printf("\nEnter name;\t");
    scanf("%s", std[i].name);
}


}
