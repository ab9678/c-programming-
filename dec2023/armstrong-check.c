#include<stdio.h>
int main(){

int a;
int originalNum;

printf("Enter a number");

scanf("%d",&a);

originalNum=a;

int d,sum=0;
//in c every non zero value is considered as true so while(a) mean while a is not zero
while(a){
    int temp=a%10;
    a=a/10;

    printf("%d",temp);

    d=temp*temp*temp;

    sum = sum +d;
    


}
printf("\n%d",sum);

if(sum==originalNum){
    printf("\nIts an Armstrong number");
}else{
    printf("\nIt is not an Armstrong number");
}

}