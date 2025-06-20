#include<stdio.h>

int main(){

int a[6],i,j,new;
int temp1=0,temp2=0;
for(i=0;i<6;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<6;i++){
    for(j=0;j<6-i;j++){
    if(a[j]>a[j+1]){
        temp1=a[j+1];
        temp2=a[j];
        a[j+1]=temp2;
        a[j]=temp1;

        
    }
    }
}

for(i=0;i<6;i++){
    printf("%d\t",a[i]);
}

}


// all wrong here