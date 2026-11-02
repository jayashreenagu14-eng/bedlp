#include<stdio.h>
void main()
{
    int num,i;
    printf ("enter a numbe");
    scanf ("%d",&num);
    for(i=2;i<num;i++)
    {
    if(num%i==0)
        {

            printf("not a prime number\n");
            exit(1);
        }
    }
    printf ("prime number/n");
}
