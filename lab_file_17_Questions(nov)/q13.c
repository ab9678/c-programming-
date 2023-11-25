/*
Q- input marks of n students and find out the largest among them.
ALGORITHM:--
1 start
2 take two functions highestmarks() and main()
3 in main function declare size variable for the number of students and take input
from the user
4 store that value as the size of the array a[size]
5 declare variables i and highest
6 take input for the array 
7 print the marks of all the students i.e print the array
8 now in highestmarks() we store the element at 0 in the highest variable 
9 take a for loop to read the elements of the array
10 take an if statement inside that for loop
11 if a[i] is greater than the variable 'highest', store that element in 'highest'
12 after the loop is complete print the variable highest
13 stop 

**/

#include<stdio.h>

void highestmarks(int size,int a[size],int i,int highest){

highest=a[0];

for(i=0;i<size;i++){
    if(a[i]>highest){
        highest=a[i];
    }
}
printf("The highest marks among them are %d",highest);

}
int main(){
int size;

printf("Enter the number of students\n");
scanf("%d",&size);

int a[size],i,highest;

printf("Enter the marks of the students\n");
for(i=0;i<size;i++){
    scanf("%d",&a[i]);
}


printf("The marks of all the students are\n");
for(i=0;i<size;i++){
    printf("%d\t",a[i]);
}
printf("\n");



highestmarks(size,a,i,highest);



}
