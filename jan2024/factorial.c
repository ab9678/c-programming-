#include<stdio.h>


int fact (int n){
if(n == 0){
    return 1;
}else{
    return fact(n-1)*n;


}
}

int main(){

int n;

printf("fatorial is %d",fact(5));


}