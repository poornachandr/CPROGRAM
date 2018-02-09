include<stdio.h>
int main()
{
 int num,i;
 printf("\n enter the number:");
 scanf("%d",&num);
 for(i=1;i<=10;i++)
 {
  if(i==num)
  {
  printf("\n%d is in the range of 1 to 10",num);
 }
 else
 {
 printf("\n no");
 }
 }
 return 0;
 }
