#include<stdio.h>
int main()
{
    int a,b;
    a=1;
    do
    {
        b=1;
        do
        {
            printf("%d * %d = %d",a,b,a*b);
            printf("\n");
            b++;
        }while(b<=10);
        a++;
    }while(a<=10);
    return 0;
}
