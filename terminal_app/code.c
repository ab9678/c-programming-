#include<stdio.h>
#include<string.h>
#include<stdlib.h>
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

//ARRAY FUNCTION START
int array(int size){

//int returnedValue;

int i,j,product,diff;
int numOfArray;

printf("Enter how many array do you need\n");
scanf("%d",&numOfArray);

int array[numOfArray][size];

printf("Enter the elements\n");
for(i=0;i<numOfArray;i++){
    printf("Enter Array %d\n",i+1);
    for(j=0;j<size;j++){
        
        scanf("%d",&array[i][j]);
    }
}

for(i=0;i<numOfArray;i++){
    printf("\n\nArray %d\n",i+1);
    for(j=0;j<size;j++){
        printf("%d\t",array[i][j]);
    }
}

//calculator part
int sum;
char operation;
int insideOperation;

printf("\n\nSpecify arithmetic operation for you array ('+' , '-' , '/' , '*')");
scanf(" %c",&operation);

//ADDITION PART
if(operation == '+'){
    
    printf("Do yo want \n(1)sum of corresponding elements or \n(2)All elements of the arrays"); // I have lets say 3 array so for sum of elements i need is for loop , essesntially it is sumrow of all indivisual rows;   
    scanf("%d",&insideOperation);


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
    printf("Do yo want \n(1)Difference of corresponding elements or \n(2)All elements of the arrays"); // I have lets say 3 array so for sum of elements i need is for loop , essesntially it is sumrow of all indivisual rows;
    
    scanf("%d",&insideOperation);


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
    printf("Specify what type:-\n1)Elements of the array\n2)Corresponding elements of the arrays\nInput: ");
    scanf("%d",&operation1);

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
//___________________________________________________________________________________________________________________________


int matrix(){

int rowSize,columnSize;
printf("\nEnter Row size of matrix\nInput: ");
scanf("%d",&rowSize);
printf("\nEnter Column Size of the matrix\nInput: ");
scanf("%d",&columnSize);

int a[rowSize][columnSize],i,j;

int operation;


}



//Main Function
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main(){

int operation;

printf("Specify the operation to be performed (Enter the corresponding number)\n\n1. Array \n2. Matrix \n3. Integers \n4. File Handling \n5. Structure \n6. Special series ");
scanf("%d",&operation);

int returnedValue;
char yesORno;

// ARRAY PART {Start}
if(operation==1){
    int arrSize;
    printf("Enter the size of your array:\t");
    scanf("%d",&arrSize);
    returnedValue=array(arrSize);
    if(returnedValue == 1){
        printf("\nDo You Want to try Again?(y/n)\n");
        scanf(" %c",&yesORno);
        if(yesORno == 'y'){
            array(arrSize);
        }else{
            printf("\nThank You! , Have a good day !\n\n");
        }
        
    }else{//To be able to run array again
        printf("\nOnce More?(y/n)\n");
        scanf(" %c",&yesORno);
        if(yesORno=='y'){
            array(arrSize);
        }else{
            printf("\nThank You! , Have a good day !\n\n");
        }
    }
    // ARRAY PART {End}
}else if(operation == 2){
    printf("\n\nYou Have Chosen Matrix\n");
    returnedValue=matrix();
    

}



//Main Function End
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////