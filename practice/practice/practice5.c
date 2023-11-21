#include<stdio.h>

int main(){

int rowsize,columnsize;
/*printf("Hello world\n");*/
printf("Enter the rowsize");
scanf("%d",&rowsize);

printf("Enter the columnsize");
scanf("%d",&columnsize);

int a[rowsize][columnsize],b[rowsize][columnsize],i,j,c[rowsize][columnsize];
    printf("Enter the elements of the first matrix\n");
    for(i=0;i<rowsize;i++){
    	for(j=0;j<columnsize;j++){
    		scanf("%d",&a[i][j]);
    	}
    }
    
    printf("Enter the elements of the second matrix\n");
    
    for(i=0;i<rowsize;i++){
    	for(j=0;j<columnsize;j++){
    		scanf("%d",&b[i][j]);
    	}
    }
    
    printf("sum of the transpose of the above matrices are\n");
    for(i=0;i<columnsize;i++){
    	for(j=0;j<rowsize;j++){
    		c[i][j]=a[j][i]+b[j][i];
    		printf("%d\t",c[i][j]);
    	}
    	printf("\n");
    }
    
    
    