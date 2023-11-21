#include<stdio.h>
int main()
{
//matrix calculator add and subtract

//declaring size
int rowsize,columnsize;

printf("Enter the row size of the matrix\n");
scanf("%d",&rowsize);

printf("Enter the column size of the matrix\n");
scanf("%d",&columnsize);



//declaring matrix
int a[rowsize][columnsize],b[rowsize][columnsize],i,j,sum=0,difference=0;

//reading and printing first matrix
printf("Enter the first matrix\n");
for(i=0;i<rowsize;i++){
    for(j=0;j<columnsize;j++){
        scanf("%d",&a[i][j]);
    }
}
printf("Your first matrix is \n");
for(i=0;i<rowsize;i++){
    for(j=0;j<columnsize;j++){
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}


//reading and printing second matrix 

printf("Enter the second matrix \n");
for(i=0;i<rowsize;i++){
    for(j=0;j<columnsize;j++){
        scanf("%d",&b[i][j]);
    }
}

printf("Your sencond matrix is \n");
for(i=0;i<rowsize;i++){
    for(j=0;j<columnsize;j++){
        printf("%d\t",b[i][j]);
    }
    printf("\n");
}

//declaring variable for calculator
int user_input,sumop=1,Diffop=2;

//take input for operation 
printf("specify operation:\n1.Addition(1)\n2.Subtraction(2)\n");
scanf("%d",&user_input);

//if else statements to figure out the operation

//if condition is met then add
if(user_input==sumop){
    printf("Sum of above matrices are\n\n");
    for(i=0;i<rowsize;i++){
        for(j=0;j<columnsize;j++){
            sum=a[i][j]+b[i][j];
            printf("%d\t",sum);
        }
        printf("\n");
}
//else subtract
}else{
    printf("Difference of above matrices are\n\n");
    for(i=0;i<rowsize;i++){
        for(j=0;j<columnsize;j++){
            difference=a[i][j]-b[i][j];
            printf("%d\t",difference);
        }
        printf("\n");
}
}



}