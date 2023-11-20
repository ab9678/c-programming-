/*
Q-14 I) COMPUTE SUM OF EVEN AND ODD NUMBERS UING FUNCTION
ALGORITHM:--
1 start
2 


**/

#include<stdio.h>
int a[5],i,even,odd;
void sumeven(){

for(i=0;i<5;i++){
    if(a[i]%2==0){
        even=even+a[i];
    }
}
printf("\nSum of even numbers is %d\n",even);



}

void sumodd(){

for(i=0;i<5;i++){
    if(a[i]%2!=0){
        odd=odd+a[i];
    }
}
printf("\nSum of odd numbers is %d\n",odd);


}
int main(){



printf("Enter the numbers \n");

for(i=0;i<5;i++){
    scanf("%d",&a[i]);
}

for(i=0;i<5;i++){
    printf("%d\t",a[i]);
}
printf("\n");


sumeven();
sumodd();






    
}