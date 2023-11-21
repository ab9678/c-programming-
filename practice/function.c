#include<stdio.h>
int i,j,a[2][2],b[2][2],sum=0,diff=0;


void matrixsum(){

    printf("Enter the first matrix\n");
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


    printf("Your matrices are\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");

    }

    printf("Your matrices are\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");

    }

    //sum
    printf("sum of above matrices are\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            sum=a[i][j]+b[i][j];
            printf("%d\t",sum);
        }
        printf("\n");
    }



}



void difference(){
    printf("Enter the first matrix\n");
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


    printf("Your matrices are\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");

    }

    printf("Your matrices are\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");

    }

    //Difference
    printf("sum of above matrices are\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            sum=a[i][j]-b[i][j];
            printf("%d\t",sum);
        }
        printf("\n");
    }

}





int main(){
    char operation;
    printf("Specify operation('+' for addition\n'-' for subtraction)");
    scanf(" %c",&operation);

    if(operation=='+'){
        matrixsum();
    }else if(operation=='-'){
        difference();
    }else{
        printf("Invalid operation");
        return 1;
    }
}