#include<stdio.h>
int main()
{
    int basic, insure, gross, net;
    float da, hra, pf;
    printf("Enter basic salary : ");
    scanf("%d",&basic);
    da=basic*0.20;
    hra=basic*0.15;
    gross=basic+da+hra;
    insure=500;
    pf=basic*0.12;
    net=gross-(insure+pf);
    printf("\nBasic salary            : %d",basic );
    printf("\nDearness Allowance      : %f",da);
    printf("\nHRA                     : %f",hra);
    printf("\nInsurance               : %d",insure);
    printf("\nProvident Fund          : %f",pf);
    printf("\nGross Salary            : %d",gross);
    printf("\nNet Salary              : %d",net);
    return 0;
}
