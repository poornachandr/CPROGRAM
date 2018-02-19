#include<stdio.h>
int main()
{
 int i,j,n,t,a[10];
 printf("\n enter the number:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
  for(j=i+1;j<n;j++)
 {
  if(a[i]>a[j])
  {
   t=a[i];
   a[i]=a[j];
   a[j]=t;
  }
 }
}
i=9n=10/2
printf("the median element is %d",
return 0;
}
