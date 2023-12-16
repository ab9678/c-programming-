#include<stdio.h>

int main(){

int a=5; 
int b=10;
int *p;
int *q;
int **s;

p=&a;
q=&b;
s=&p;

//int *p=&a;
//int *q=&b;
//int **s=&p;

printf("\n%d",p);
printf("\n%d",&p);

printf("\n%d",s);

printf("\n%d",b);


printf("\n%d",a);





}

void sum(){

int n;

printf("Enter the last number\n");


}