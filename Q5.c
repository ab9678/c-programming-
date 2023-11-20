/*
Q-SUM OF EVEN AND ODD NUMBERS SORED IN AN ARRAY OF N INTEGERS.
ALGORITHM:--



**/

#include<stdio.h>
void evenodd(int size , int even , int odd , int i , int a[size]){
for(i=0;i<size;i++){
    if(a[i]%2==0){
        even=even+a[i];
    }else{
        odd=odd+a[i];
    }
}
printf("The sum of even numbers are:%d",even);
printf("\nThe sum of odd numbers are:%d",odd);



}


int main(){
int size;
printf("Enter the size of the array\n");
scanf("%d",&size);
int a[size],i,even=0,odd=0;

printf("Enter the elements of the array\n");
for(i=0;i<size;i++){
    scanf("%d",&a[i]);
}
printf("The elements of the array are\n");
for(i=0;i<size;i++){
    printf("%d\t",a[i]);
}
printf("\n");

evenodd(size,even,odd,i,a);

}