#include <stdio.h>

int fact(int n){


if(n == 0){
    return 1;
}else{




int factorial = n * fact(n-1);
return factorial;






}

}



int main(){

int a=5;

int number;

scanf("%d",&number);

printf("\nfactorial of %d is %d",number,fact(number));


}

