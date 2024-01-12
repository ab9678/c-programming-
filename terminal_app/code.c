#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void asciiHello(){
    printf("\n\n");
    printf(" ## ##              ##     ### ##   ### ##   \n");
    printf("##   ##              ##     ##  ##   ##  ##  \n");
    printf("##                 ## ##    ##  ##   ##  ##  \n");
    printf("##                 ##  ##   ##  ##   ##  ##  \n");
    printf("##                 ## ###   ## ##    ## ##   \n");
    printf("##   ##            ##  ##   ##       ##      \n");
    printf(" ## ##            ###  ##  ####     ####     \n");
    printf("\n\n");
}


void asciiThankYou(){
    printf("\n\n");
    printf("                                                                                                 \n");
    printf("                                                                                                 \n");
    printf(" /__  ___/                                              \\    / /                               // \n");
    printf("   / /        / __        ___         __       / ___     \\  / /      ___                      //  \n");
    printf("  / /        //   ) )   //   ) )   //   ) )   //\\ \\       \\/ /     //   ) )    //   / /       //   \n");
    printf(" / /        //   / /   //   / /   //   / /   //  \\ \\       / /     //   / /   //   / /           \n");
    printf("/ /        //   / /   ((___( (   //   / /   //    \\ \\     / /     ((___/ /   ((___( (       ##     \n");
    printf("\n\n");

}


/*
1. Array
    1. addition of its elements
    2 addition of corrsponding elements
    3 subtraction of its elements
    4 subtraction of its corresponding elements
    5 multiplication of its elements 
    6 multiplication of corresponding elements

2. matrix
    1.matrix calculator 

3. Integers
    1. palindrome check
    2. calculator 

4. File
    1 create file 
    2 read an existing file 
    3 create and read a file
    4 append an existing file 

5. structure
    1. structure of students with marks of 5 subjects of each student, calculate sum , average , 
        and name the topper in each subject , and the class topper 

    2. structure employee ,total salary, who has the highest salary, name of the HR .

6. special series 
    1. fibonaci series till a certain stopping integer 'n'
    2. Sum of n numbers 
    3. sum of even numbers till n
    4. sum of odd numbers till n 
    5. product of numbers till n (declare long integer here)
*/


int array(int size){

//int returnedValue;

int i,j,product,diff;    
    
int numOfArray;

printf("Enter how many array do you need: ");
scanf("%d",&numOfArray);

int array[numOfArray][size];

printf("\n\nPlease Enter the Elements:-\n");
for(i=0;i<numOfArray;i++){
    printf("Enter Array %d\n",i+1);
    for(j=0;j<size;j++){
        
        scanf("%d",&array[i][j]);
    }
}

for(i=0;i<numOfArray;i++){
    printf("\n\nArray %d:-\n\n",i+1);
    for(j=0;j<size;j++){
        printf("%d\t",array[i][j]);
    }
}

//calculator part
int sum;
char operation;
int insideOperation;

printf("\n\nSpecify arithmetic operation for you array ('+' , '-' , '*')\nInput: ");
scanf(" %c",&operation);

//ADDITION PART
if(operation == '+'){
    if(numOfArray > 1){
    printf("\nDo yo want \n(1)sum of corresponding elements or \n(2)All elements of the arrays"); // I have lets say 3 array so for sum of elements i need is for loop , essesntially it is sumrow of all indivisual rows;   
    scanf("%d",&insideOperation);
    }else{
        insideOperation = 2;
    }

    if(insideOperation == 1){

        for(i=0;i<size;i++){                    //if I need sum row in the opposite direction then i has to be the value of j and j the value of I essentially transpose ;
            sum=0;
            for(j=0;j<numOfArray;j++){
                sum=sum+array[j][i];
            }
            printf("%d\t",sum);

        }

    }else if(insideOperation == 2){
        for(i=0;i<numOfArray;i++){
            sum=0;
            for(j=0;j<size;j++){
                sum =sum + array[i][j];
            }
            printf("Array %d = %d\t",i+1,sum);
        }
    }else{
        printf("Invalid Input\n");
        return 1;
    }


//SUBTRACTION PART

}else if (operation == '-'){
    if(numOfArray>1){
    printf("Do yo want \n(1)Difference of corresponding elements or \n(2)All elements of the arrays"); // I have lets say 3 array so for sum of elements i need is for loop , essesntially it is sumrow of all indivisual rows;
    
    scanf("%d",&insideOperation);
    }else{
        insideOperation = 2;
    }

    if(insideOperation == 1){


        for(i=0;i<size;i++){                    //if I need sum row in the opposite direction then i has to be the value of j and j the value of I essentially transpose ;

            diff=array[0][i];

            for(j=1;j<numOfArray;j++){

                diff=diff-array[j][i];
            }
            printf("%d\t",diff);


        }

    }else if(insideOperation == 2){
        for(i=0;i<numOfArray;i++){
            diff=array[i][0];
            for(j=1;j<size;j++){
                diff =diff - array[i][j];
            }
            printf("Array %d = %d\t",i+1,diff);
        }
    }else{
        printf("Invalid Input\n");
        return 1 ;
    }
//MULTIPLICATION PART
}else if (operation == '*'){
    int operation1;
    if(numOfArray>1){
    printf("Specify what type:-\n1)Elements of the array\n2)Corresponding elements of the arrays\nInput: ");
    scanf("%d",&operation1);
    }else{
        operation1 = 1;
    }
    if(operation1 == 1){
        int productRow;
        //Elements of array
        for(i=0;i<numOfArray;i++){
            productRow=1;
            for(j=0;j<size;j++){
                productRow=productRow*array[i][j];
            }
            printf("\nProduct of elements of Array(%d) is %d ",i+1,productRow);
        }

        printf("\nDone!\n");


    }else if(operation1 == 2){
        //Elements of corresponding array
        int productColumn;
        for(j=0;j<size;j++){
            productColumn = 1;
            for(i=0;i<numOfArray;i++){
                productColumn = productColumn * array[i][j];
            }
            printf("\nProduct of %dth element of Arrays is %d",j+1,productColumn);
        }

        printf("\nDone!\n");
    }else{
        printf("\nInvalid Input\n");
        return 1;
    }
    
}else{
    printf("\nInvalid Input\n");
    return 1;
}

//END OF ARRAY FUNCTION
}


int matrix(){
//Matrix calculator
int rowSize,columnSize;
printf("\nEnter Row size of matrix\nInput: ");
scanf("%d",&rowSize);
printf("\nEnter Column Size of the matrix\nInput: ");
scanf("%d",&columnSize);

int a[rowSize][columnSize],i,j;
int b[rowSize][columnSize];
int typeOfOperation;

printf("Specify the Kind of Matrix operation\n(1)Matrix manipulation\n(2)Arithmetic calculation\nInput(1/2): ");
scanf("%d",&typeOfOperation);
if(typeOfOperation == 1){

// This is type 1 i.e., matrix manipulation
printf("\n----------------------------------------------------------------------------------------------------------------------\n\n");

    printf("Option 1- MATRIX MANIPULATION IS SELECTED\n\n");

printf("\n----------------------------------------------------------------------------------------------------------------------\n\n");

    printf("\nEnter the matrix:-\n");
    for(i=0;i<rowSize;i++){
        printf("Row %d\n",i+1);
        for(j=0;j<columnSize;j++){
            scanf("%d",&a[i][j]);
        }

    }
    int insideType1;
    printf("Please select any one of the following:-\n(1)Transpose\n(2)Square of a matrix\nInput: ");
    scanf("%d",&insideType1);
        //do square and transpose ##
        if(insideType1 == 1){

    printf("\n----------------------------------------------------------------------------------------------------------------------\n\n");
            printf("You have selected Transpose of a matrix\n");
    printf("\n----------------------------------------------------------------------------------------------------------------------\n\n");
            printf("Original matrix is \n");

            for(i=0;i<rowSize;i++){
                for(j=0;j<columnSize;j++){
                    printf("%d\t",a[i][j]);
                }
                printf("\n");
            }
            printf("Transpose of the matrix is \n");

            for(i=0;i<columnSize;i++){
                for(j=0;j<rowSize;j++){
                    printf("%d\t",a[j][i]);
                }
                printf("\n");
            }


        }else if(insideType1 == 2){
            printf("Original matrix is \n");

            for(i=0;i<rowSize;i++){
                for(j=0;j<columnSize;j++){
                    printf("%d\t",a[i][j]);
                }
                printf("\n");
            }

            printf("\nSquare of the Matrix is\n");

            for(i=0;i<rowSize;i++){
                for(j=0;j<columnSize;j++){
                    int result = a[i][j] * a[i][j];
                    printf("%d\t",result);
                }
                printf("\n");
            }


        }else{
            printf("\n\nInvalid Input\n");
            return 1;
        }





    // ##   


}else{          // if 2 is selected we will have matrix calculator 

// This is type 2 i.e, Arithmetic opearation
printf("\n----------------------------------------------------------------------------------------------------------------------\n\n");
    printf("Option 2- ARITHMETIC CALCULATION IS SELECTED \n\n");
    printf("!!PLEASE NOTE MULTIPLICATION IS AVAILABLE ONLY FOR SQUARE MATRICES!!\n");
printf("----------------------------------------------------------------------------------------------------------------------\n\n");


printf("\nEnter the first matrix:-\n");
for(i=0;i<rowSize;i++){
    printf("Row %d\n",i+1);
    for(j=0;j<columnSize;j++){
        scanf("%d",&a[i][j]);
    }
}
printf("\nEnter the second matrix:-\n");
for(i=0;i<rowSize;i++){
    printf("Row %d\n",i+1);
    for(j=0;j<columnSize;j++){
        scanf("%d",&b[i][j]);
    }
}

printf("Your Matrices are:-\n");
for(i=0;i<rowSize;i++){
    for(j=0;j<columnSize;j++){
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}
printf("\nAND\n\n");

for(i=0;i<rowSize;i++){
    for(j=0;j<columnSize;j++){
        printf("%d\t",b[i][j]);
    }
    printf("\n");
}

char insideType2;
printf("\nPlease select one of the following \n\n' + '  ,  ' - '  ,  ' * '\nInput: ");
scanf(" %c",&insideType2);

if(insideType2 == '+'){
printf("\n----------------------------------------------------------------------------------------------------------------------\n\n");
    printf("\t\tADDITION OF MATRICES\t\t");
printf("\n\n----------------------------------------------------------------------------------------------------------------------\n\n");

    int sum=0;
    printf("\n\nRESULTANT MATRIX:-\n\n");
    for(i=0;i<rowSize;i++){
        for(j=0;j<columnSize;j++){
            sum=a[i][j] + b[i][j];
            printf("%d\t",sum);
        }
        printf("\n");
    }
}else if(insideType2 == '-'){
printf("\n----------------------------------------------------------------------------------------------------------------------\n\n");
    printf("\t\tDIFFERENCE OF MATRICES\t\t");
printf("\n\n----------------------------------------------------------------------------------------------------------------------\n\n");
    int diff=0;
    printf("\n\nRESULTANT MATRIX:-\n\n");
    for(i=0;i<rowSize;i++){
        for(j=0;j<columnSize;j++){
            if(a[i][j]>b[i][j]){
                diff = a[i][j] - b[i][j];
            }else{
                diff = b[i][j] - a[i][j];
            }
            printf("%d\t",diff);
        }
        printf("\n");
    }
}else if(insideType2 == '*'){
printf("\n----------------------------------------------------------------------------------------------------------------------\n\n");
    printf("\t\tMULTIPLICATION OF MATRICES\t\t");
printf("\n\n----------------------------------------------------------------------------------------------------------------------\n\n");
    printf("\n\n!!PLEASE NOTE MULTIPLICATION IS AVAILABLE ONLY FOR SQUARE MATRICES!!\n\n");
    int r[rowSize][columnSize];
    if(rowSize==columnSize){    //multiplication if 
    for(i=0;i<rowSize;i++){
    for(j=0;j<columnSize;j++){

        r[i][j]=0;

        for(int k=0;k<rowSize;k++){
            r[i][j]=r[i][j]+a[i][k]*b[k][j];
        }
    }
    }
    for(i=0;i<rowSize;i++){
        for(j=0;j<columnSize;j++){
            printf("%d\t",r[i][j]);
        }
        printf("\n");
    }                            //end of multiplication if

    }else{
        printf("\nThe matrix is not a square matrix\n");

    }                            //end of multiplication else

}else{//end of __else if (insideType2=='*')__
    printf("\nNone of the Arithmatic opeartor selected/Invalid input\n");
    return 1;
}

}//end of else if 2 is selected line:265

}//Matrix() close


int integer(){

float num;


}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main(){
asciiHello();


int operation;

printf("Specify the operation to be performed (Enter the corresponding number)\n\n1. Array \n2. Matrix \n3. Integers \n4. File Handling \n5. Structure \n6. Special series\nInput:  ");
scanf("%d",&operation);

int returnedValue;
char yesORno;

// ARRAY PART {Start}
if(operation==1){
    int arrSize;
    printf("\n----------------------------------------------------------------------------------------------------------------------\n\n");
    printf("You have chosen Array");
    printf("\n----------------------------------------------------------------------------------------------------------------------\n\n");

    printf("Enter the size of your array:\t");
    scanf("%d",&arrSize);
    returnedValue=array(arrSize);
    if(returnedValue == 1){
        printf("\nDo You Want to try Again?(y/n)\n");
        scanf(" %c",&yesORno);
        if(yesORno == 'y'){
            array(arrSize);
        }else{
            printf("\n\nThank You!\n\n");
        }
        
    }else{//To be able to run array again
        printf("\nOnce More?(y/n)\n");
        scanf(" %c",&yesORno);
        if(yesORno=='y'){
            array(arrSize);
        }else{
            printf("\n\nThank You!\n\n");
        }
    }
    // ARRAY PART {End}



// MATRIX START
}else if(operation == 2){
    printf("\n----------------------------------------------------------------------------------------------------------------------\n\n");

    printf("You Have Chosen Matrix");
    printf("\n----------------------------------------------------------------------------------------------------------------------\n\n");

    returnedValue=matrix();


    if(returnedValue == 1){
        printf("\nDo You want to try Again?(y/n)\n");
        scanf(" %c",&yesORno);
        if(yesORno == 'y'){
            matrix();
        }else{
            printf("\n\nThank you!\n\n");
        }
    }else{
        printf("\nOnce More(y/n)?\n");
        scanf(" %c",&yesORno);
        if(yesORno == 'y'){
            matrix();
        }else{
            printf("\n\nThank you!\n\n");
        }

    }
    




//MATRIX END
}else if(operation = 3){
//INTEGER START
printf("\n------------------------------------------------------------------------------------------------------\n");
    printf("You have selected Integers");
printf("\n------------------------------------------------------------------------------------------------------\n");
    returnedValue=integer();




}//INTEGER END 





    

asciiThankYou();

//Main Function End
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////