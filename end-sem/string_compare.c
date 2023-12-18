#include<stdio.h>
#include<string.h>
int i;
void compare(char *s1, char *s2);


int main(){

char s1[20],s2[20];

printf("Enter first string \n");
fgets(s1,sizeof(s1),stdin);

printf("Enter the second string\n");
fgets(s2,sizeof(s2),stdin);



compare(&s1 , &s2);

}


void compare(char *s1 , char *s2 ){
int i,value=1;
for(i=0 ; i<strlen(s1)||i<strlen(s2) ; i++){

    if(*s1==*s2){
        value = 0;
        break;
    }else{
        continue;
    }

    s1++;
    s2++;

}
if (value ==0){
    printf("success");
}else{
    printf("Not same \n");
}

}