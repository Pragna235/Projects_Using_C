#include<stdio.h>
int main()
{
    int a,l,b;
    float pi=3.14;
    printf("Enter the side of the square:");
    scanf("%d",&a);
    printf("\nThe area of square : %d",a*a);
    printf("\nThe perimeter of the square : %d",4*a);
    printf("\nEnter the length and breadth of Rectangle : ");
    scanf("%d %d",&l, &b);
    printf("\n\nArea of a rectangle : %d",l*b);
    printf("\nPerimeter of a rectangle : %d",2*(l+b));
    return 0;

}
