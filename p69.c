#include<stdio.h>
int main()
{
 int a,b,c;
 printf("\n enter two numbers");
 scanf("%d%d",&a,&b);
 if(a>b)
 {
  c=a-b;
  printf("\n the difference is %d",c);
  }
  else
  {
  c=b-a;
  printf("\n the difference is %d",c);
  }
  if(c%2==0)
  {
   printf("\n even");
   }
   else
   {
    printf("\n odd");
    }
    return 0;
   } 
