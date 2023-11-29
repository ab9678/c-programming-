#include<stdio.h>
#include<stdlib.h>
int main(){

FILE *fp;

fp=fopen("f1.txt","w+");

if(fp==NULL){
    exit(1);
}

char s[10];
printf("Enter your name\n");
gets(s);

fputs(s,fp);


rewind(fp);
char ch;
while(!feof(fp)){
    ch=fgetc(fp);
    printf("%c",ch);
}
fclose(fp);

}