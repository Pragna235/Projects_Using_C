#include<stdio.h>
int main()
{
    int r , i;
    printf("Enter the range : ");
    scanf("%d",&r);
    i=1;
    while(i<=r)
    {
        if(i%2==0)
            printf("%d\t",i);
        i++;
    }
    return 0;
}
