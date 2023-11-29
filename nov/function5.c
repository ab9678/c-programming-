#include<stdio.h>

int sumodN(int n){
int sum;
if(n == 0){
    return 0;
}
return n+sumodN(n-1);
}


int main(){
int a;
printf("till which number do you wanna add the digits?\n");
scanf("%d",&a);

printf("sum of numbers till %d is %d",a , sumodN(a));


}