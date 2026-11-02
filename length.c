#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50],str2[50],copy[50],concat[100];
    int len1,len2,result;
    printf("enter first string:");
    scanf("%s",str1);
    printf("enter second string:");
    scanf("%s",str2);
    len1=strlen(str1);
    len2=strlen(str2);
    printf("\n length of first string=%d",len1);
    printf("\n length of second string=%d",len2);
    strcpy(copy,str2);
    printf("\n copied string=%s",copy);
    strcpy(concat,str1);
    strcat(concat,str2);
    printf("\n concatenated string=%s",concat);
    result=strcmp(str1,str2);
    if(result==0)
        printf("\n both string are equal.");
    else if(result>0)
        printf("\n first string is greater.");
    else
        printf("\n first string is smaller.");
    return 0;
}
