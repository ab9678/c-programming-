//largest and smallest in an array

#include<stdio.h>


int main(){

int a[5],i,j;



printf("Enter the elements of the array \n");

for(i=0;i<5;i++){
    scanf("%d",&a[i]);
}
int largest =a[0];
int smallest =a[0];
for(i=0;i<5;i++){
    if(largest<a[i]){
        largest=a[i];
    }


}

for(i=0;i<5;i++){
    if(a[i]<smallest){
        smallest=a[i];
    }
}
printf("The largest number in the array is %d and smallest number is %d\n",largest,smallest);
}