#include<stdio.h>
void main()
{
 int count=0,i;
 char a[30]="be the best version of you";
 for(i=0;a[i]!='\0';i++)
 {
  if((a[i]!=' '))
 {
  count++;
 }
 }
  printf("\n %d",count);
}
