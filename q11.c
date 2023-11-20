/*
Q-ACCEPT TWO INTEGERS AND DETERMINE THE LARGEST AMONG THEM.
ALGORITHM:--



**/

#include<stdio.h>
void largest(int x, int y){

if(x>y){
    printf("largest is %d",x);

}else{
    printf("Largest is %d",y);
}


}

int main(){

int x,y;

printf("Enter the first number\n");
scanf("%d",&x);

printf("Enter the second number\n");
scanf("%d",&y);

largest(x,y);




}