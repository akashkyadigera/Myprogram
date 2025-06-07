#include <stdio.h>
int main ()
{
    int a,b,add,sub,mul,div;
    printf ("enter number FIRST:");
    scanf("%d",&a);
    printf ("enter number SECOND:" );
    scanf("%d",&b);
    add= a+b;
    printf ("\nadd is = %d",add);

    sub= a-b;
    printf ("\nsub is = %d",sub);

    mul= a*b;
    printf ("\nmul is = %d",mul);

    div= a%b;
    printf ("\ndiv is = %d",div);
    return 0;
}