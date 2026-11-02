#include<stdio.h>
void main()
{
    int n,i,first=0,second=1,next;
    printf ("enter the number of terms:");
    scanf("%d",&n);
    printf("fibonacci series up to %d terms :\n",n);
    printf("%d/n%d",first,second);
    for(i=3;i<=n;i++)
    {
        next=first+second;
        printf("\n%d",next);
        first=second;
        second=next;

    }
}
