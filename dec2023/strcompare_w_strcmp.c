// Compare two strings without using strcmp

#include<string.h>
#include <stdio.h>

int main(){

char myName[20];
char hisName[20];

printf("Enter you name \n");

gets (myName);


printf("Enter his name \n");

gets(hisName);
 
int len1=strlen(myName);
int len2=strlen(hisName);
int i,j,flag=0;
if (len1==len2){
    for(i=0;i<len1;i++){
        
        if(myName[i]!=hisName[i]){
            flag = 1;
            break;
        }else{
            continue;
        }
        
    }

    if (flag!=1){
        printf("The strings are same \n");
    }else{
        printf("strings aren't same \n");
    }
}else{
    printf("Not possible\n");

}




}

// #include <string.h>
// #include <stdio.h>

// int main() {

//     char myName[20];
//     char hisName[20];

//     printf("Enter your name:\n");
//     gets(myName);

//     printf("Enter his name:\n");
//     gets(hisName);

//     int len1 = strlen(myName);
//     int len2 = strlen(hisName);
//     int i, flag = 0;

//     if (len1 == len2) {
//         flag = 1; // Assume strings are equal until proven otherwise

//         for (i = 0; i < len1; i++) {
//             if (myName[i] != hisName[i]) {
//                 flag = 0; // Set flag to 0 if characters are not equal
//                 break;    // No need to continue checking
//             }
//         }

//         if (flag == 1) {
//             printf("The strings are the same\n");
//         } else {
//             printf("The strings are different\n");
//         }
//     } else {
//         printf("Not possible\n");
//     }

//     return 0;
// }
