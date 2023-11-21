#include<stdio.h>
void number(int a , int b , int sum){
printf("Enter a\n");
scanf("%d",&a);
printf("Enter b\n");
scanf("%d",&b);

sum=a+b;
printf("%d",sum);

}


int main(){
    
int a,b,sum;
printf("sum is :-\n");
number(a,b,sum);

}