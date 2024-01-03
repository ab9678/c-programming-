#include<stdio.h>
int a[5],i;

int add(int sum){
for(i=0;i<5;i++){
    sum=sum+a[i];
}
return sum;
}


int main(){

int sum=0;
printf("Enter the array's elements\n");
for(i=0;i<5;i++){
    scanf("%d",&a[i]);
}
printf("Sum of elements of the above array is \n");
printf("%d",add(sum));

}
