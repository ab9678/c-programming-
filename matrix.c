#include<stdio.h>
int main(){

int a[2][2],b[2][2],sum,i,j;

printf("Enter first matrix\n");
for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        scanf("%d",&a[i][j]);
    }
}

printf("Enter the second matrix\n");
for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        scanf("%d",&b[i][j]);
    }
}

printf("sum is \n");
for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        sum=a[i][j]+b[i][j];
        printf("%d\t",sum);
    }
    printf("\n");
}






}