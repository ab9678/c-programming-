#include<stdio.h>
void add(int sum ,int n, int *a){
int i;
for(i=0;i<n;i++){
    sum=sum+*a;
    a++;
}
printf("Sum of the elements in the matrix is = %d\n",sum);
}
int main(){

int n;

printf("How many elements do you wanna enter \n");
scanf("%d",&n);

int a[n],i,sum=0;

//Input

printf("Enter the elements\n");

for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
add(sum , n , &a);
}