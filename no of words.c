#include<stdio.h>
void main()
{
 int count=0,i;
 char a[30]="DREAM TO WIN IN LIFE";
 for(i=0;a[i]!='\0';i++)
 {
  if((a[i]!=' '))
 {
  count++;
 }
 }
  printf("\n %d",count+1);
 }
