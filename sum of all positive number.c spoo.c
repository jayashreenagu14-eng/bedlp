#include<stdio.h>
void main()
{
    int num,sum=0;
    printf ("enter a number\n");
    scanf ("%d,&num");
    while (num!=999)
    {
        if (num>0)
        {
            sum=sum+num;
        }
        printf ("enter a number\n");
        scanf ("%d",&num);
    }
    printf ("sum of positive number=%d",sum);

}
