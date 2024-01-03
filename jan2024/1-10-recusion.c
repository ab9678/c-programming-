#include<stdio.h>

void logic(int n){
if(n<10){
    logic (n+1);
    printf("%d",n);
}
}


int main(){

int n=1;
//printf("%d",logic(n));
logic(n);
}