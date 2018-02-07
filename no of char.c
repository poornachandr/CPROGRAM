#include<stdio.h>
void main()
{
 int count=0,i;
 char a[30]="THREE MISTAKES OF MY LIFE";
 for(i=0;a[i]!='\0';i++)
 {
  if((a[i]!=' ')&&(a[i]!='\n'))
 {
  count++;
 }
 }
  printf("\n %d",count);
 }


 
