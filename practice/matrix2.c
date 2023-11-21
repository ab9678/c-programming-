#include<stdio.h>
int main()

{

int a[3][3] , sum , i , j , sumrow , sumcolumn ;

//reading the input about the matrix from the user
printf("Enter the elements of your matrix:-\n");

for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf("%d",&a[i][j]);
    }
}

//printing the matrix 

printf("Your matrix is :-\n");

for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}

printf("sum of rows are as follows:-\n");
//for adding the sum of rows
for(i=0;i<3;i++)
{
    sumrow=0;{

        for(j=0;j<3;j++){
            sumrow=sumrow+a[i][j];
        }
    }
    
    printf("%d\n",sumrow);

}
//printf("sum of rows are row1 row5 row3 respectively%d\n",sumrow);



//for adding the columns 
printf("sum of columns are as follows:-\n");
for(j=0;j<3;j++){
    sumcolumn=0;{
        for(i=0;i<3;i++){
            sumcolumn+=a[i][j];
        }
    }

    printf("%d\n",sumcolumn);

}
//printf("sum of columns are c1 c5 c3 respectively%d\n",sumcolumn);




    
}