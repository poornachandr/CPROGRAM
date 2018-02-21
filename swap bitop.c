#include<stdio.h>
int main()
{
 int n1,n2,t;
 printf("\nenter two numbers:");
 scanf("%d%d",&n1,&n2);
 n1=n1^n2;
 n2=n1^n2;
 n1=n1^n2;
 printf("\nafter swapping :%d %d",n1,n2);
 return 0;
}
