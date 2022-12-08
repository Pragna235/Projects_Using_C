#include<stdio.h>
int main()
{
    int i,r,c,t;
    float a;
    printf("Enter the range : ");
    scanf("%d",&r);
    i=1;c=0;t=0;
    while(i<=r)
    {
        if(i%2!=0)
        {
            t=t+i;
            c++;
        }
        i++;
    }
    a=t/c;
    printf("\nThe Average of odd numbers below %d : %f",r,a);
    return 0;
}
