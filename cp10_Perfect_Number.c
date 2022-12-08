#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    int i=1;
    int s=0;
    while(i<n)
    {
        if(n%i==0)
            s=s+i;
        i++;
    }
    if(s==n)
        printf("%d is a Perfect number",n);
    else
        printf("%d is not a Perfect Number",n);
    return 0;
}
