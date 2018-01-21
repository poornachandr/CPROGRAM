#include<stdio.h>
int main()
{
int min,hr=0;
printf("/n enter the time in minutes ");
scanf("%d",&min);
while(min>60)
{
hr++;
min=min-60;
}
printf("/n the time is %d:%d",hr,min);
return 0;
}
