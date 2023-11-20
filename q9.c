/*
Q-FIND THE NUMBER OF -VE AND +VE ELEMENTS IN AN ARRAY.
ALGORITHM:--



**/

#include<stdio.h>
int a[10],i,positive,negative;

void nve(){
for(i=0;i<10;i++){
    if(a[i]<0){
        negative=negative+1;
    }
}



}

void pve(){
for(i=0;i<10;i++){
    if(a[i]>0){
        positive=positive+1;
    }
}


}


int main(){



//input

printf("Enter the elements of the array \n");
for(i=0;i<10;i++){
    scanf("%d",&a[i]);
}

printf("The array is\n");
for(i=0;i<10;i++){
    printf("%d\t",a[i]);
}
printf("\n");


//negative
nve();
//positive
pve();


printf("\nYou have %d negative elements and %d positive elements\n",negative,positive);




}

