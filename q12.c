/*
Q-ACCEPT AND ARRAY AND REVERSE IT.
ALGORITHM:--
1.start
2.we daclare global variables a[5],i
3.we take two functions main() and reverse()
4.in main function, take input for the elements of the array from the user
5.in function reverse(), we start a for loop to read the variables in reverse order
6.start i from size-1 and decrement i until it is zero and print every element in correspondence
to that i address.
7.stop.




**/

#include<stdio.h>
int a[5],i;

void reverse(){


for(i=4;i>=0;i--){
    printf("%d\t",a[i]);
}
printf("\n");



}
int main(){

printf("Enter the array\n");

for(i=0;i<5;i++){
    scanf("%d",&a[i]);
}
printf("\n");
reverse();


}
