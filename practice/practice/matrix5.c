#include<stdio.h>
int main(){
int size,i;
int *p;

printf("Enter the size of the array: ");
scanf("%d",&size);

int array[size];

printf("Enter elements of the array\n");
for(i=0;i<size;i++){
	scanf("%d",&array[i]);
	}
	
	
//print

for(i=0;i<size;i++){
	printf("%d\t",array[i]);
	}


p=&array[2];
printf("Array stuff:\n");
printf("%d\t",*p++);
printf("%d\n",*p);

printf("\n%d\t\n",*++p);



}
