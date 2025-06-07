#include <stdio.h>
int main ()
{
    char Name [10] ;
    float Rollno ,Subject1, Subject2, Subject3, per , total ;
    printf("\nEnter Roll Number :");
    scanf("%d",&Rollno);

    printf("\nEnter Name :");
    scanf("%s",&Name);

    printf("\nEnter Subject1 :");
    scanf("%f",&Subject1);

    printf("\nEnter Subject2 :");
    scanf("%f",&Subject2);

    printf("\nEnter Subject3 :");
    scanf("%f",&Subject3);
    total= Subject1 + Subject2 + Subject3;
    per= (total/3)*100;
    printf("\ntotal %f",total);
    printf("\npercentage %f",per);
    return 0;

}