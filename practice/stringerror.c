#include<stdio.h>
#include<string.h>
int main(){
char name[100],i;
printf("Enter your name \n");
gets(name);
puts(name);

char operation,letter_to_be_changed,new_letter,position;
printf("Do you wnat to change a letter(y/n)\n");
scanf("%c",&operation);

if(operation=='y'||operation=='Y'){
    printf("Which letter do you want to change?\t");
    scanf("%c",&letter_to_be_changed);

    printf("\nposition?\t");
    scanf("%c",&position);

    printf("\nNew Letter?\t");
    scanf("%c",&new_letter);


    for(i=0;i<'\0';i++){
        if(i==letter_to_be_changed && i==position){
            name[i]=new_letter;
            printf("%c",name[i]);
        }else{
            continue;
        }
    }
}else if(operation=='n'||operation=='N'){
    printf("Your name noted is\n");
    puts(name);
}else{
    while(operation!='n'||operation!='N'||operation!='y'||operation!='Y'){
        continue;
    }
}



}