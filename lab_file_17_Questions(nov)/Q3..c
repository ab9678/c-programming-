#include<stdio.h>
#include<stdio.h>
int a[3][3],i,j,sumrow,sumcolumn;
void column(){
for(j=0;j<3;j++){
    sumcolumn=0;{
        for(i=0;i<3;i++){
            sumcolumn=sumcolumn+a[i][j];
            
            
        }
        printf("\n%d\n",sumcolumn);
        
    }
}

}

void row(){

for(i=0;i<3;i++){
    sumrow=0;{
        for(j=0;j<3;j++){
            sumrow=sumrow+a[i][j];
            
            
        }
        printf("\n%d\n",sumrow);
        
    }
}

}


int main(){

printf("Enter the first matrix\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf("%d",&a[i][j]);
    }
}

//printing first matrix

for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%d\t",a[i][j]);
        
    }
    printf("\n");
}

//product of row
printf("Prduct of rows are\n");
row();


//product of columns 
printf("Prduct of columns are\n");

column();


}












    
