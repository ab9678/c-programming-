#include<stdio.h>
#include<stdlib.h>

int a2b(int a1 , int a2);
int b2a (int a2 , int b2);

int main(){
    int a=10;
    int b=20;

    
    a=b2a(a,b);

    b=a2b(a,b);

    printf("%d  %d",a,b);
    printf("%d %d",a,b);
}

int a2b(int a1 , int b1){

int *p=&a1;
int *q=&b1;

*q=*p;
free(q);
free(p);
return b1;

}

int b2a(int a2 , int b2){

int *r=&a2;
int *s=&b2;

*r=*s;
return a2;

}
