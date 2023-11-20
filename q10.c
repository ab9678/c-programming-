/*
Q-ACCEPT TWO INTEGERS AND DETERMINE THE LARGEST AMONG THEM.
ALGORITHM:--



**/

#include<stdio.h>


void largest(int a , int b){

if(a>b){
    printf("largest among them is %d",a);
}else{
    printf("largest among them is %d\n",b);
}



}

int main(){

int a,b;

printf("Enter first number\n");
scanf("%d",&a);

printf("Enter second number\n");
scanf("%d",&b);


largest(a,b);






}