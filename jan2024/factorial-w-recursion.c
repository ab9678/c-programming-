#include<stdio.h>
int main(){
int n;
printf("Enter a number \n");
scanf("%d",&n);
int result=n*(n-1);
for(int i=2;i<n;i++){
    result=result * (n-i);
}
printf("%d",result);
int m;
printf("Enter another number\n");
scanf("%d",&m);
int i=m;
int result2=1;
while(i>0){
    result2=result2*i;
    i--;
}
printf("%d",result2);
}
