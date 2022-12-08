#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter any three numbers : ");
    scanf("%d %d %d",&a, &b, &c);
    if((a>b) && (a>c))
            printf("\nThe Big number : %d",a);
    else if((b>a) && (b>c))
        printf("\nThe Big number : %d",b);
    else
        printf("\nThe Big number : %d",c);
    return 0;
}
