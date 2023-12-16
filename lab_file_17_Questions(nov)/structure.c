//input name roll and marks in 3 sub for each student and calculate total and average of each.
//also print the highest marks among all the students and the name of the topper



#include<stdio.h>
struct student //Declaring
{
    int roll;
    char name[20];
    int marks[3];
    
};

int main(){

int numOfStudents;
printf("How many students?\n");
scanf("%d",&numOfStudents);

int i,j,highest;
int sum;
float avg;
struct student s[numOfStudents];//assign numOfStudents student to structure

printf("Enter details\n");

for(i=0;i<numOfStudents;i++){
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

printf("\n___________________________________________________________________________________________________\n\n");

printf("YOUR STRUCTURE IS READY\n");
for(i=0;i<numOfStudents;i++){

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
    for(j=0;j<3;j++) 
    {
        if(s[i].marks[j]>highest)
        
        {
            highest=s[i].marks[j];
        }
    }

    printf("his highest marks is %d",highest);

    avg= (float) sum/3;
    
    printf("\nAverage is %f",avg);
    
    printf("\n\n\n");
}
int index;
int largest=s[0].marks[0];
for(i=0;i<numOfStudents;i++){
    for(j=0;j<3;j++){
        if(s[i].marks[j]>largest){
            largest = s[i].marks[j];
            index=i;
        }
    }
}
printf("student with highest marks is %s and his marks is %d",s[index].name,largest);

}