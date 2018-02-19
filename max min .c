#include<stdio.h>
int main()
{
 int a[10],i,n,max,min;
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
 a[i]=max;
 for(i=0;i<n;i++)
 {
  if(max<a[i])
  max=a[i];
  }
  printf("\n maximum  number is %d",max);
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

