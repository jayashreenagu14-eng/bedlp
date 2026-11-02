#include<stdio.h>
int main()
{
    int n, i;
    float marks[10],sum=0,avg;
    printf("enter number of students:");
    scanf("%d",&n);
    printf("enter marks:\n");
    for(i=0; i<n;i++)
    {
        scanf("%f",&marks[i]);
        sum=sum+marks[i];
    }

    avg=sum/n;
    printf("average marks-%f",avg);

    return 0;
}
