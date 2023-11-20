/*
Q-ACCEPT A STRING AND REVERSE IT.
ALGORITHM:--
1. start
2. Inlude string.h
3. declare string s[]='hello world'.
4. declare global variables i and length as integers.
5. print the string s in main().
6. declare reverse().
7. in reverse() we store length of string s, using strlen, in variable length.
8. we take a for loop where, we start i from length and decrement i by when until it reaches 0.
9. we print every character one by one starting from the last character.
10. Call this reverse() in main().
11. stop.

**/

#include<stdio.h>
#include<string.h>

char s[]="hello world";

int i,length;

void reverse(){

length=strlen(s);
for(i=length;i>=0;i--){
    printf("%c",s[i]);
}
printf("\n");

}


int main(){

puts(s);
//printf("%d\n\n",strlen(s));
reverse();

}