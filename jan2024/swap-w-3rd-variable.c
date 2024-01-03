#include<stdio.h>
void swap (int *a , int *b){

*a=*a+*b;
*b=*a-*b;
*a=*a-*b;


}
int main(){

int a=2 , b=4 ;

swap(&a,&b);
printf("value in a %d and value in b %d \n",a,b);

}