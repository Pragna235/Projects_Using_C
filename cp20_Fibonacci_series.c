#include<stdio.h>
int main()
{
    int i,a,b,c,r;
    printf("Enter range : ");
    scanf("%d",&r);
    a=0;b=1;
    printf("%d",a);
    printf("\n");
    printf("%d",b);
    printf("\n");
    c=0;
    while(c<=r)
    {
        c=a+b;
        if(c<=r)
        {
            printf("%d",c);
        }
        printf("\n");
        a=b;
        b=c;
    }
    return 0;
}
