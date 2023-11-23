/*
Q-PRINT THE LARGEST ELEMENT OF THE ARRAY.
ALGORITHM:--
1. start.
2. declare the variables a[5],i,largest.
3. declare a function , largestelement().
4. in the main(), first we take input for the elements of the array.
5. in the largestelement() we first store a[0], as the largest number in the variable largest.
6. we take a for loop to read the elements one by one.
7. inside that for loop we use if statement with condition that if a[i]>largest,
store that number in largest variable.
8. In the main() we call the largestelement().
9. Print largest variable.
10. stop.



**/
#include<stdio.h>
int a[5],i,largest;
void largestelement(){

largest=a[0];

for(i=0;i<5;i++){
    if(a[i]>largest){
        largest=a[i];
    }
}


}
int main(){

printf("Enter the elements of the array\n");
for(i=0;i<5;i++){
    scanf("%d",&a[i]);
}

largestelement();
printf("\nThe largest element of the array is %d\n",largest);





}