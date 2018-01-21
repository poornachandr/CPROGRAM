include <stdio.h>
int main()
{
    int n, num, r, result = 0;
    printf("Enter a three digit integer: ");
    scanf("%d", &n);
    num = n;
    while (num != 0)
    {
        r= num%10;
        result =result*10+r;
        num /= 10;
    }
    if(result == n)
    {
        printf("%d is an palindrome number.",n);
    }
        else
        {
        printf("%d is not an palindrome number.",n);
    }   
        return 0;
}
