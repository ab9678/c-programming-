//program to reverse a string from user specifies letter;

#include<stdio.h>
char string[11];

void reverse(int position){

int i;

for(i=position;i>=0;i--){
    printf("%c",string[i]);
}

}



int main(){

int i,pos;


printf("Enter string\n");

fgets(string,sizeof(string),stdin);

puts("Your string is");
puts(string);

char s;
printf("From which character do you want to reverse the string?\n");

scanf(" %c",&s);

for(i=0;i<sizeof(string);i++){
    if(string[i]==s){
        pos=i;
    }
}

reverse(pos);
    
}