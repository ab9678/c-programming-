//check if a number is a plaindrome;


#include<stdio.h>

int main(){

int number;

scanf("%d",&number);

int reverse;
int originaNum = number;
while(number!=0){
    reverse=number%10;
    printf("%d",reverse);
    number=number/10;
    
}
if(reverse==number){
    printf("It is palindrome");
}

}

//try to do it using rerturn and store that return value in a variable and then check;