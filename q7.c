/*
Q-Accept a sring and count the number of characters in it.
ALGORITHM:--



**/

#include<stdio.h>
char s[]="hello world";
int count=0,i;
void stringcount(){

for(i=0;s[i]!='\0';i++){
    count=count+1;
}
}

int main(){

puts(s);

stringcount();

printf("The number of characters including spaces are %d",count);



}