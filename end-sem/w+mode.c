#include<stdio.h>

int main(){

char name[10];
fgets(name,10,stdin);
char ch;
FILE *fp;

fp = fopen("name.txt","w+");

if(fp==NULL){
    printf("error");
}

fputs(name,fp);

rewind(fp);

while(!feof(fp)){
    if(ch == '\n'){
        break;
    }
        ch = fgetc(fp);
        printf(" %c",ch);
    
}
}