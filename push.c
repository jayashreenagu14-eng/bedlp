#include<stdio.h>
#include<ctype.h>
int stack[20],top=-1;
void push(int x)
{
    stack[++ top]=x;
}
int pop()
{
    return stack[top--];
}
int main()
{
    char ex[]="53+82-*";
    int i,result,a,b;
    for(i=0; ex[i] !='\0';i++)
    {
        if(isdigit(ex[i]))
        {
            push(ex[i]-'0');
        }
        else
        {
            b=pop();
            a=pop();
            switch(ex[i])
            {
                case '+':push(a+b);
                break;
                case'-':push(a-b);
                break;
                case'*':push(a*b);
                break;
                case'/':push(a/b);
                break;
            }
        }
    }
    result=pop();
    printf("Rrsult=%d",result);
    return 0;
}
