#include<stdio.h>

int main(){

int a[2][2],b[2][2],r[2][2]={0};
int i , j , k;

printf("input\n");

for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        scanf("%d",&a[i][j]);
    }
}

printf("\n");

for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        scanf("%d",&b[i][j]);
    }
}

//printing 

for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}

for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        printf("%d\t",b[i][j]);
    }
    printf("\n");
}


//multiplication

for(i=0;i<2;i++){
    for(j=0;j<2;j++){

        for(k=0;k<2;k++){
            r[i][j]=r[i][j]+a[i][k]*b[k][j];
        }
    }
}

printf("\n");

printf("Multiplication of above matrices are\n");

for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        printf("%d\t",r[i][j]);
    }
    printf("\n");
}

}