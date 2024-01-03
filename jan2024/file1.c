#include<stdio.h>
int main(){

FILE *fp;

fp = fopen("abc.txt","w+");

int num;
printf("Enter a number \n");

scanf("%d",&num);

fprintf(fp,"%d",num);

int numFrmfile;

rewind(fp);

while (!feof(fp))
{
    fscanf(fp,"%d",&numFrmfile);
}

printf("%d",numFrmfile);





}