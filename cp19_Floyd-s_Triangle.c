#include<stdio.h>
int main()
{


int i,j,t,rows;
printf("Enter number of rows : ");
scanf("%d",&rows);
t=1;
for(i=0;i<rows;i++)
{
    for(j=0;j<=i;j++)
    {
        if(t<10)
            printf("%d ",t);
        else
            printf("%d ",t);
        t++;
    }
    printf("\n");
}

return 0;
}
