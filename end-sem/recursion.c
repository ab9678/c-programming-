//sum of even natural numbers using recersion
#include <stdio.h>
#include<stdlib.h>
int additionOfEvenTilln(int n);


int main(){

int lastNum;


printf("Enter the last num: ");

scanf("%d",&lastNum);
if (lastNum%2 !=0){
    printf("last number has to an even number\n");
    exit(1);
}

printf("Addition of even numbers till n is %d",additionOfEvenTilln(lastNum));
}

int additionOfEvenTilln(int n){
    if(n%2==0){
        if(n == 0){
            return 0;
        }

        return n + additionOfEvenTilln(n-2);
    }
}