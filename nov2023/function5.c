//add numbers till n using recursion

#include<stdio.h>

int sumodN(int n){
int sum;
if(n == 0){
    return 0;
}
return n+sumodN(n-1);  //simply take n-1 and add n to that . EG if n=20 , then 20+19 then 18+19 so on...
}


int main(){
int a;
printf("till which number do you wanna add the digits?\n");
scanf("%d",&a);

printf("sum of numbers till %d is %d",a , sumodN(a));


}