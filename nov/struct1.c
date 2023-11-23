//Insert details of 5 students and their marks in 5 subjects
#include<string.h>
#include<stdio.h>
struct students{

char name[20];
int roll;
int marks[5];


};

int main(){
int i,j;
struct students st[2];

for(i=0;i<2;i++){   //parent for loop
    printf("Please provide details of the %dth student\n",i+1);
    printf("Enter name of the student\t");
    scanf(" %s",&st[i].name);

    printf("Enter the roll number\t");
    scanf(" %d",&st[i].roll);
    printf("Please enter the marks of his/her 5 subjects below\n");
    for(j=0;j<5;j++){
        scanf("%d",&st[i].marks[j]);
    }
}
printf("NAME\t\tROLL NO.\t SUB1\tSUB2\tSUB3\tSUB4\tSUB5\t\n");
for(i=0;i<2;i++){
    printf("%s\t\t%d\t ",st[i].name,st[i].roll);
    for(j=0;j<5;j++){
        printf("%d\t",st[i].marks[j]);
    }
    printf("\n");
}

printf("Done!");
}