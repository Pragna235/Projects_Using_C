#include<stdio.h>
int main()
{
    int a,b,c;
    char x;
    printf("Enter two values : ");
    scanf("%d %d",&a, &b);
    printf("\n\n aA sS dD pP");
    printf("\n\nEnter your choice : ");
    scanf("%c",x);
    //x='a';
    switch(x)
    {
    case 'a':
    case 'A':
        printf("\nSum of %d and %d : %d",a,b,a+b);
        break;
    case 's':
    case 'S':
        if(a>b)
        {
            c=a-b;
            printf("\nDifference Between %d and %d : %d",a,b,c);
        }
        else
        {
            c=b-a;
            printf("\nDifference Between %d and %d : %d",a,b,c);

        }
        break;
    case 'd':
    case 'D':
        if(a>b)
            c=a/b;
        else
            c=b/a;
        printf("\nQuotient : %d",c);
        break;
    case 'p':
    case 'P':
        printf("\nProduct of %d and %d : %d",a,b,a*b);
        break;
    default:
        printf("\nEnter Valid choice!");
        break;
    }
    return 0;
}
