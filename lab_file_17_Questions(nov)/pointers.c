

#include<stdio.h>


void one(int a , int b){
//int a=10;
//int b=20;

int *p=&a;
int *q=&b;

*p=*q;

printf("%d",a);

}
void two(int a, int b){
//int a=10;
//int b=20;

int *p=&a;
int *q=&b;

*q=*p;
printf("%d",b);
}

int main(){
int a=10;
int b=20;


one(a,b);
two(a,b);



}