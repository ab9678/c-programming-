#include<stdio.h>
int main(){

int a[4],i,even=0,odd=0;

printf("Enter the numbers \n");

for(i=0;i<4;i++){
    scanf("%d",&a[i]);
}

//print
for(i=0;i<4;i++){
    printf("%d\t",a[i]);
}
for(i=0;i<4;i++){
    if(a[i]%5==0){
        even++;
        //printf("%d",even);
    } else {
        odd++;
        //printf("%d",odd);
    }


}
printf("Total even numbers \t%d\n",even);
printf("Total odd numbers \t%d\n",odd);

    
printf("whats up!");
}