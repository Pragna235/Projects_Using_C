#include<stdio.h>
int main()
{
    int m1, m2, m3, m4, m5, m6, total;
    char result, grade, name[15];
    float avg;
    printf("Enter student name : ");
    scanf("%s",name);
    printf("\nEnter 6 marks : ");
    scanf("%d %d %d %d %d %d", &m1, &m2, &m3, &m4, &m5, &m6);
    total=m1+m2+m3+m4+m5+m6;
    avg=total/6;
    if(avg>40)
    {
        result = 'p';
        if(avg>75)
            grade='A';
        else if (avg>60 && avg<=75)
            grade='B';
        else if(avg>50 && avg<=60)
            grade='C';
        else
            grade='D';
    }
    else
        result='f';
    printf("\nStudent Name  : %s",name);
    printf("\nMarks         : ");

    printf("\n%d\t%d\t%d\t%d\t%d\t%d\t",m1,m2,m3,m4,m5,m6);
    printf("\nAverage Marks        : %f",avg);
    if(result=='p')
        printf("\nResult       : Pass");
    else
        printf("\nResult       : Fail");
    printf("\nGrade            : %c",grade);
    return 0;

}
