#include<stdio.h>




int main(){
int a[5],largest,i;

printf("Enter 5 numbers\n");
for(i=0;i<5;i++){
    scanf("%d",&a[i]);
}



/*let*/ largest=a[0];
for(i=0;i<5;i++){
    if(a[i]>largest){
        largest=a[i];
        
    }
}



printf("\n%d\n",largest);
}









