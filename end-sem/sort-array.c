#include<stdio.h>

int main(){

int a[5];
int i;
for(i=0;i<5;i++){
    scanf("%d",&a[i]);
}
int temp=0 , temp2=0;
for(i=0;i<4;i++){
    if(a[i]>a[i+1]){
        temp=a[i];
        temp2=a[i+1];
        a[i+1]=temp;
        a[i]=temp2;
    }
}

for(i=0;i<5;i++){
    printf("%d\t",a[i]);
}
}