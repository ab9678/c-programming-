#include<stdio.h>

int main(){
int a[2][3],i,j;


//input 


printf("Enter data \n");


for(i=0;i<2;i++){
    for(j=0;j<3;j++){
        scanf("%d",&a[i][j]);
    }
}

printf("The matrix is \n");

for(i=0;i<2;i++){
    for(j=0;j<3;j++){
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}

//transpose 



printf("The transpose of the above matrix is \n");


for(i=0;i<3;i++){
    for(j=0;j<2;j++){
        printf("%d\t",a[j][i]);
    }
    printf("\n");
}



















}