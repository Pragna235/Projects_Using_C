#include<stdio.h>
int main()
{
    int n,t,s,r;
    printf("Enter any number : ");
    scanf("%d",&n);
    t=n;
    s=0;
    while(n>0)
    {
        r=n%10;
        s=(s*10)+r;
        n=n/10;
    }
    if(t==s)
        printf("%d is a Palindrome Number",t);
    else
        printf("%d is not a Palindrome Number",t);
    return 0;
}
