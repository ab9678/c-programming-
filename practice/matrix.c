#include<stdio.h>
int main(){
    int a[5][3] , sum=0 , i , j;

    //we are reading and printing the elements here


    printf("Enter the elements of your matrix \n");
    for(i=0;i<5;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }

    }
    printf("your matrix is \n");
    for(i=0;i<5;i++){
        for(j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }



    //start for loop to get the elements and add them

    for(i=0;i<5;i++){
        for(j=0;j<3;j++){
            sum = sum + a[i][j];
            
        }
        
    }

    printf("%d",sum);






















}







