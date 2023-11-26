#include<stdio.h>
struct student //Declaring
{
    int roll;
    char name[20];
    int marks[3];
    
};

int main(){

int i,j,highest;
int sum;
float avg;
struct student s[2];//assign 2 student to structure

printf("Enter details\n");

for(i=0;i<2;i++){
    printf("\nEnter the details of student %d\n",i+1);

    printf("\nRoll number: ");
    scanf("%d",&s[i].roll);

    printf("\nName: ");
    scanf(" %s", s[i].name);

    printf("\nMarks: ");
    for(j=0;j<3;j++){       //for loop needed because the marks is an array and to
                            //access that array we need to access it through structure hence s[i].marks[j];
        scanf("%d",&s[i].marks[j]);
    }
}
for(i=0;i<2;i++){

    sum=0;
    printf("\n\nRoll:\t %d",s[i].roll);
    printf("\nName:\t %s",s[i].name);
    printf("\nmarks:\t");

    for(j=0;j<3;j++){
        printf("%d\t",s[i].marks[j]);
        sum=sum+s[i].marks[j];
    }

    printf("\nTotal marks = %d",sum);
    printf("\n");

    highest=s[i].marks[0];
    for(j=0;j<3;j++){
        if(s[i].marks[j]>highest){
            highest=s[i].marks[j];
        }
    }

    printf("his highest marks is %d",highest);

    avg= (float) sum/3;
    
    printf("\nAverage is %f",avg);
    
    printf("\n\n\n");
}

}