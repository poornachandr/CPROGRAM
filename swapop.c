

 #include<stdio.h>
int main()
{
 int a,b,t;
 printf("\nenter two numbers a and b:");
 scanf("%d%d",&a,&b);
 a=a^b;
 b=a^b;
 a=a^b;
 printf("\nafter swapping :%d %d",a,b);
 return 0;
}
 
