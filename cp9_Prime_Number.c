#include<stdio.h>
int main()
{
    int i,n,k;
    printf("Enter any number : ");
    scanf("%d",&n);
    i=1;
    k=0;
    while(i<=n)
    {
        if(n%i==0)
            k=k+1;
        i++;
    }
    if(k==2)
        printf("\n%d is a Prime number",n);
    else
        printf("\n%d is not a prime number",n);
    return 0;
}

