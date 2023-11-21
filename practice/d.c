///greatest among two
#include<stdio.h>
void large(int a,int b)
{
  if(a>b)
  {
    printf("%d this is greater",a); 
  }
  else
  {
    printf("%d is greater",b);
  }
}


int main()
{
int a,b;
printf("Enter the 1st no",a);
scanf("%d",&a);
printf("Enter the 2nd no",b);
scanf("%d",&b);

large(a,b);
}
