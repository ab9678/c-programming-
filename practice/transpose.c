#include<stdio.h>
int main(){
    int a[2][3],i,j;
    printf("Enter the elements of the matrix \n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }

    }

    printf("the matrix is \n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("Transpose of the abavoe matrix is \n");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
    
}