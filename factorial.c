#include<stdio.h>
void main()
{
    int num,fact=1,i;
    printf ("enter a number/n");
    scanf ("%d",&num);
    for (i=num;i>=1;i--)
    {
fact=fact*i;
    }
    printf ("factorial is %d",fact);
}
