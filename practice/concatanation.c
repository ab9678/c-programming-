#include<stdio.h>
#include<string.h>
int main(){
int a[5]={12,20,30,40,50},i;
int *p=a;

for(i=0;i<5;i++){
printf("%d\t",*p);
p++;
}
}