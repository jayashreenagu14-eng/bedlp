#include<stdio.h>
int main()
{
    float a,b,result;
    char op;
    printf("enter first number:");
    scanf("%f",&a);
    printf("enter operator(+,-,*,/):");
    scanf("%c",&op);
    printf("enter second number:");
    scanf("%f",&b);
    switch(op)
    {
    case'+':
        result=a+b;
        printf("result=%",result);
        break;
    case'-':
        result=a-b;
        printf("result=%",result);
        break;
    case'*':
        result=a*b;
        printf("result=%f",result);
        break;
    case'/':
        if(b==0)
            printf("error:division by zero is not allowed.");
        else
        {

            result=a/b;
            printf("result=%f",result);
           }
                break;
    default:
        printf("error:invalid operator,");
    }

    return 0;
        }








