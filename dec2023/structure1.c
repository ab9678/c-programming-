#include<stdio.h>
// gross sal = basuc sal + da + hra ;
// let da be 10,000 and hra be 25,000;
struct employee
{
    int empId;
    char name[20];
    int baseSalary;

    int grsSalary;

};






int main(){

int numOfEmp,i;
printf("How many Employee's details you wanna enter:\t");

scanf("%d",&numOfEmp);



struct employee e[numOfEmp];


printf("\nEnter Employee's details\n");

for(i=0;i<numOfEmp;i++){
    printf("Employee %d\n",i+1);

    printf("\nEnter Employee ID:\t");
    scanf("%d",&e[i].empId);

    printf("\nEnter Employee's name:\t");
    scanf("%s",e[i].name);

    printf("\nEnter his Base salary:\t");
    scanf("%d",&e[i].baseSalary);

}

printf("Employee details are \n");

for(i=0;i<numOfEmp;i++){
    printf("Details of employee %d",i+1);

    printf("\nEmp. ID:\t%d",e[i].empId);
    printf("\nName:\t%s",e[i].name);
    printf("\nBase Salary:\t%d",e[i].baseSalary);
    printf("\nGross salary is %d",e[i].baseSalary + 10000 + 25000);


}





}