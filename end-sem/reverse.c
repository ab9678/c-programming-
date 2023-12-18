#include <stdio.h>

int main(){

int a=234;

int original=a;
int reversed=0;

while (a > 0) {
    reversed = reversed * 10 + a % 10;
    a = a / 10;
    printf("%d",reversed);
}


}