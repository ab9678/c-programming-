/*
Q-PRINT ALL NUMBERS DIVISIBLE BY 10 USING FUNCTION
ALGORITHM:--



**/

#include<stdio.h>
int a[10],i,min,max;

void largest(){
max=a[0];
for(i=0;i<10;i++){
    if(a[i]>max){
        max=a[i];
    }
}
printf("The largest element is %d\n",max);

}

void smallest(){

min=a[0];
for(i=0;i<10;i++){
    if(a[i]<min){
        min=a[i];
    }
}
printf("The smallest element is %d",min);

}


int main(){

printf("Enter the elements of the array \n");
for(i=0;i<10;i++){
    scanf("%d",&a[i]);
}

printf("The elements are \n");

for(i=0;i<10;i++){
    printf("%d\t",a[i]);
}
printf("\n");

largest();
smallest();




}