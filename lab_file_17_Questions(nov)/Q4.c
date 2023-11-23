/*
Q-Reverse of an array
ALGORITHM:--


**/

#include<stdio.h>
int a[5],i;
void reverse(){
for(i=4;i>=0;i--){
    printf("%d\t",a[i]);
    
}
printf("\n");
}


int main(){
printf("Enter elements\n");

for(i=0;i<5;i++){
    scanf("%d",&a[i]);
}
printf("The original array is\n");
for(i=0;i<5;i++){
    printf("%d\t",a[i]);
}

//reverse
printf("\nReverse of the above array is \n");
reverse();
}