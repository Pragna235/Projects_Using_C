#include<stdio.h>
int main()
{
    int r,s;
    long n;
    printf("Enter any number : ");
    scanf("%ld",&n);
    s=0;
    while(n>0)
    {
        r=n%10;
        s=s+r;
        n=n/10;

    }
    printf("The sum of digits is %d",s);
    return 0;
}
