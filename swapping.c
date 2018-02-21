#include<stdio.h>
int main()
{
 int p,q,temp;
 printf("\n enter the value of p");
 scanf("%d",&p);
 printf("\n enter the value of q");
 scanf("%d",&q);
 temp=p;
 p=q;
 q=temp;
 printf("\n the value of a is %d",p);
 printf("\n value of b is %d",q);
 return 0;
}
