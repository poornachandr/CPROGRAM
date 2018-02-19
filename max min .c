#include<stdio.h>
int main()
{
 int a[10],i,n,ma,s;
 printf("\n enter the number");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
  printf("\n%d",a[i]);
 }
 a[i]=ma;
 for(i=0;i<n;i++)
 {
  if(ma<a[i])
  ma=a[i];
  }
  printf("\n maximum  number is %d",ma);
  s=a[0];
 for(i=0;i<n;i++)
 {
  if(a[i]<s)
  s=a[i];
  }
  printf("\n smallest number is %d",s);
}
return 0;
}

