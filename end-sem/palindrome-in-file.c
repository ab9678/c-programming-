// check if a number which is stored in a file is palinddrome or not 
#include<stdio.h>

int main(){

int num;
printf("Enter a number \n");
scanf("%d",&num);

FILE *fp;

fp = fopen("number.txt","w+");

fprintf(fp,"%d",num);

rewind(fp);

int nfromFile;

//while(!feof(fp)){

    fscanf(fp , "%d" , &nfromFile);
    printf("%d",nfromFile);

//}
int reversed=0;
int original = nfromFile;

// while(nfromFile > 0){
//     reversed=reversed*10 + nfromFile%10;
//     nfromFile = nfromFile/10;
// }

while (nfromFile > 0) {
        reversed = reversed * 10 + nfromFile % 10;
        nfromFile = nfromFile / 10;
    }

printf("\n%d",reversed);


if (reversed==original){
    printf("\nIt is a palindrome\n");
}else{
    printf("\nNope \n");
}
}