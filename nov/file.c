#include<stdio.h>
#include<stdlib.h>
int main(){
char location[30]; 
char content[20];
FILE *p;

gets(content);

//printf("specify location of the file ");
//gets(location);
p=fopen("/home/abhigyan/Documents/abc.txt","w");
fputs(content,p);

fclose(p);
printf("Done!");
}