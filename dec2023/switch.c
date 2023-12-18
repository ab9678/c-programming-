#include <stdio.h>

int main(){

char operation;
int num1, num2;

printf("Enter operand:\t");
scanf(" %c",&operation);

printf("Enter first number\n");
scanf("%d",&num1);

printf("Enter second number\n");
scanf("%d",&num2);

switch (operation)
{
case '+':
    printf("%d",num1+num2);
    break;
case '-':
    printf("%d",num1-num2);
    break;
case '/':
    printf("%d",num1/num2);
    break;
case '*':
    printf("%d",num1*num2);
default:
    break;
}

}
