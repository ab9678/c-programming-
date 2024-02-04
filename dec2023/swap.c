#include<stdio.h>
//declaring functions 

void a2b(int a , int b);
void b2a(int a, int b);

int main(){

int a,b;
a=5;
b=10;

printf("a:%d\nb:%d\n",a,b);

printf("now value of a is ");
a2b(a,b);
printf("\nAnd value of b is ");
b2a(a,b);
printf("\n");
}

void a2b(int a , int b){

int *p=&a;
int *q=&b;

*p=*q;


printf("%d",a);

}

//fucntion definition
void b2a(int a , int b){
    int *p=&a;
    int *q=&b;

    *q=*p;
    printf("%d",b);
}
