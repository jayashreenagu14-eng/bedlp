#include<stdio.h>
int main()
{
    char str[100];
    int i=0;
    printf("enter a string:");
    gets(str);
    while(str[i]  !='\0')
    {
        i++;
    }
    printf("length of string=%d",i);
    return 0;
}
