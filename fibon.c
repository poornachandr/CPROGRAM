#include<stdio.h>
void main()
{
 int n,t=1,s=1,nxt,i=0;
 printf("\n enter the number:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  printf("%d\n",t);
  nxt=t+s;
  t=s;
  s=nxt;
  }
} 
