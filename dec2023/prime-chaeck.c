#include<stdio.h>
int main(){

int n;


printf("Enter the 'to=be=querried' number\n");
scanf("%d",&n);


int flag=0;
int i;
if(i<2){
    flag=1;
}

for(i=2;i<n;i++){
    if(n%i==0){
        flag=1;
        break;
    }else{
        flag=0;
    }
}

if(flag==1){
    printf("It is not a prime number\n");
}else{
    printf("It is a prime number");
}

}