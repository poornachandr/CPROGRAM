#include<stdio.h>
void main()
{
 int n,i,avg=0;
 printf("\n enter a number:");
 scanf("%d",&n);
 for(i=0;i<=n;i++)
 {
  avg=(i+i)/n;
 }
 printf("\n %d is the average",avg);
 }
