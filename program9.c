#include<stdio.h>
int main()
{

    int n,i,flag=0;
    printf("enter a number:");
    scanf("%d",&n);
    if(n<=1)
    {

        flag=1;
    }
    else{
        for(i=2;i<=n/2;i++)
        {

            if(n%i==0)
            {

                flag=1;
                break;
            }
        }
    }
    if(fiag==0
       printf("%d is not a prime number",n);
       return 0;
}










