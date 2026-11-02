#include<stdio.h>
#include<ctype.h>
int main()
{
    char s[100],ch;
    int i,a=0,d=0,v=0,c=0,sp=0,sc=0;
    printf("enter string: ");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        ch=tolower(s[i]);
        if(isalpha(ch))
        {
            a++;
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')v++;
            else c++;
        }
        else if(isdigit(ch))d++;
        else if(ch==' ')sp++;
        else if(ch!='\n')sc++;
    }
    printf("alphabets=%d\n digits=%d\n vowels=%d\n consonants=%d\n space=s=%d\n special=%d",a,d,v,c,sp,sc);
    return 0;
}
