#include<stdio.h>
#include<conio.h>
int main()
{
    printf("\tSwaping two variables without third variables\n");
    int a,b;
    printf("The value of A = ");
    scanf("%d",&a);
    printf("The value of B = ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The value of A = %d\n",a);
    printf("The value of B = %d",b);
    return 0;

}